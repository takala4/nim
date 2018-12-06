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

var link_table = initTable[int, Link_obj]()
var node_table = initTable[int, Node_obj]()

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
    c = strutils.parseFloat(line_list[2])
    var link_obj =  Link_obj(from_node_id: f_node, to_node_id: t_node, cost:c)
    link_table[int(line_counter)] = link_obj
    line_counter = line_counter + 1

proc add_node_data(node_id int): int=
  