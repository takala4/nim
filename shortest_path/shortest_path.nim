import os
import times
import tables
import strutils, streams

type Link_obj = object
  from_node_id : int
  to_node_id : int
  cost : float

type Node_obj = object
  node_id : int
  search_flag : int
  previous_node_id : int
  shortest_length : float
  out_link_id_list : seq[int]

var link_table = initTable[int, Link_obj]()
var node_table = initTable[int, Node_obj]()


#node_table作成メソッド
proc add_node_data(from_node_id: int, to_node_id:int, tr_link_id:int): void = 
  if node_table.hasKey(to_node_id):
    discard
  else:
    var node_obj = Node_obj(node_id : to_node_id, search_flag : 0, previous_node_id : -1, shortest_length : Inf, out_link_id_list: @[])
    node_table[int(to_node_id)] = node_obj
  if node_table.hasKey(from_node_id):
    if tr_link_id in node_table[from_node_id].out_link_id_list:
      discard
    else:
      node_table[from_node_id].out_link_id_list.add(tr_link_id)
  else:
    var node_obj = Node_obj(node_id : from_node_id, search_flag : 0, previous_node_id : -1, shortest_length : Inf, out_link_id_list: @[tr_link_id])
    node_table[int(from_node_id)] = node_obj
  
#data読み取りメソッド
block:
  #ネットワークデータの読み取り 
  var f : File = open("network.dat" , FileMode.fmRead)
  defer :
    close(f)
    echo "closed"
  var line_counter = 1
  var f_node : int
  var t_node : int
  var c : float
  while f.endOfFile == false :
    var line=f.readLine()
    var line_list = split(line, "\t")
    f_node = strutils.parseInt(line_list[0])
    t_node = strutils.parseInt(line_list[1])
    add_node_data(f_node,t_node,line_counter)
    c = strutils.parseFloat(line_list[2])
    var link_obj =  Link_obj(from_node_id: f_node, to_node_id: t_node, cost:c)
    link_table[int(line_counter)] = link_obj
    line_counter = line_counter + 1
  echo node_table


  s
