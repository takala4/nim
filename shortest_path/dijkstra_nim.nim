import std/heapqueue
import tables
import strutils
import std/os
import nimpy


type Link = object
    from_node : int
    to_node : int
    cost : float

type Node = object
    idx : int
    in_link_list : seq[int]
    out_link_list : seq[int]
    flag : int 
    spl : float

proc `<`(a, b: Node): bool = a.spl < b.spl


var INF : float = Inf


# Input Network Data
proc input(filename:string): (Table[int, Link], Table[int, Node]) =
  var f : File = open(filename , FileMode.fmRead)
  defer :
    close(f)

  var Links = initTable[int, Link]()
  var Nodes = initTable[int, Node]()
  var line_counter:int = 0
  var from_node : int
  var to_node : int
  var c : float

  if filename.endsWith(".tntp"):
    while true:
      var line=f.readLine()
      if line.startsWith("~"):
        break

  while f.endOfFile == false :
    var line=f.readLine()
    var line_list = split(line, "\t")
    from_node = strutils.parseInt(line_list[1])
    to_node = strutils.parseInt(line_list[2])
    c = strutils.parseFloat(line_list[4])
    var link_obj =  Link(from_node: from_node, to_node: to_node, cost:c)
    Links[line_counter] = link_obj
    
    if from_node in Nodes == true:
      Nodes[from_node].out_link_list.add(line_counter)
    else:
      var node_obj = Node(idx:from_node, in_link_list : @[], out_link_list : @[line_counter], flag : 1, spl : INF)
      Nodes[from_node] = node_obj

    if to_node in Nodes == true:
      Nodes[to_node].in_link_list.add(line_counter)
    else:
      var node_obj = Node(idx:to_node, in_link_list : @[line_counter], out_link_list : @[], flag : 1, spl : INF)
      Nodes[to_node] = node_obj
    
    line_counter = line_counter + 1

  return (Links, Nodes)

proc dijkstra(Links: Table[int, Link], Nodes: Table[int, Node], source:int): Table[int, Node] =
  
  var New_Nodes = Nodes

  var queue = initHeapQueue[Node]()
  New_Nodes[source].spl = 0.0
  queue.push(New_Nodes[source])
  
  while len(queue) > 0:
    var pivoto_node_id = queue.pop().idx

    for l in New_Nodes[pivoto_node_id].out_link_list:
        var to_Node_idx = Links[l].to_node
        var tmp_cost = New_Nodes[pivoto_node_id].spl + Links[l].cost
        if  tmp_cost < New_Nodes[to_Node_idx].spl*float(New_Nodes[to_Node_idx].flag):
          New_Nodes[to_Node_idx].spl = tmp_cost
          queue.push(New_Nodes[to_Node_idx])
    New_Nodes[pivoto_node_id].flag = 0
    
  return New_Nodes


proc run(filepath:string, source:int):Table[int, Node] {.exportpy.} =
  var (Links, Nodes) = input(filepath)
  var NN = dijkstra(Links, Nodes, source)
  # for i in countup(1,len(NN)):
  #     echo(NN[i].idx, NN[i].spl)
  return NN

proc runwithdata(Links: Table[int, Link], Nodes: Table[int, Node], source:int): Table[int, Node] {.exportpy.} =
  var NN = dijkstra(Links, Nodes, source)
  return NN


# var filepath = paramStr(1)
# var (Links, Nodes) = input(filepath)
# echo Nodes
# var NN = dijkstra(Links, Nodes, parseInt(paramStr(2)))

# for i in countup(1,len(NN)):
#   echo(NN[i].idx, NN[i].spl)