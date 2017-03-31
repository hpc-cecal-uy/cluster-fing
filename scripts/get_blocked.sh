#!/bin/sh
# Shows blocked jobs
#
# Author: Santiago Iturriaga <siturria@fing.edu.uy>
showq -b | sed '/Hold/d'
