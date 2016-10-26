count=$(showq -b | sed '/Hold/d' | wc -l bloqueados | awk '{print $1}')
if [ $count -gt 2 ]
then
  
fi
