#
# Reserva de 24 cores en node40 a nombre del usuario algevo02
# Efectiva desde el momento en que se ejecuta el comando hasta el 03/11 a las 23:50
#
setres -u algevo02 -e 23:59:00_11/03 -r PROCS=24 'node40'
