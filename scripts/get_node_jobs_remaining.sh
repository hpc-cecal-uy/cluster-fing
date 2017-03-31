#!/bin/sh
#
# Show remaining walltime from jobs executing in a given node
# Arguments: <node name>
#
# Author: Santiago Iturriaga <siturria@fing.edu.uy>

for i in $(./get_node_jobs.sh $1);
do
	showq | grep "$i" | awk 'BEGIN { }{ print $5 }END { }'

done
