import std/lists
import std/heapqueue
import os
import times
import tables
import strutils, streams, pegs, unicode


type Link = object
    from_node : int
    to_node : int
    cost : float

type Node = object
    in_link_list : seq[int]
    out_link_list : seq[int]
    flag : int 
    spl : float

var Links = initTable[int, Link]()
var Nodes = initTable[int, Node]()


block:
  #ネットワーク構造の読み取り 
  var f : File = open("SiouxFalls_net.tntp" , FileMode.fmRead)
  defer :
    close(f)
    echo "closed"
  var line_counter = 1
  var f_node : int
  var t_node : int
  var c : float

  while true:
    var line=f.readLine()
    if line.startsWith("~"):
        break

  while f.endOfFile == false :
    var line=f.readLine()
    var line_list = split(line, "\t")
    f_node = strutils.parseInt(line_list[1])
    t_node = strutils.parseInt(line_list[2])
    c = strutils.parseFloat(line_list[4])
    var link_obj =  Link(from_node: f_node, to_node: t_node, cost:c)
    Links[int(line_counter)] = link_obj
    line_counter = line_counter + 1
  echo Links
