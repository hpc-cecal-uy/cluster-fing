all: mpi_hola_def mpi_hola_mpich2 


mpi_hola_def: mpi_hola.c
	mpicc mpi_hola.c -o mpi_hola_def
	
mpi_hola_mpich2: mpi_hola.c
	/opt/mpich2/gnu/bin/mpicc mpi_hola.c -o mpi_hola_mpich2

