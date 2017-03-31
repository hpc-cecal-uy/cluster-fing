#!/bin/sh
# Shows IDs from jobs executing in a given node
# Arguments: <node name>
#
# Author: Santiago Iturriaga <siturria@fing.edu.uy>

pbsnodes $1 | grep "     jobs =" | grep -o -e "[0-9]*\.rocks-cluster\.fing\.edu\.uy" | grep -o -e "[0-9]*"
