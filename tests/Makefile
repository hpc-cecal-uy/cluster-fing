all: 512MB mpi_512MB mpi_hola_def mpi_hola_mpich2 multithreads

512MB: 512MB.c
	gcc 512MB.c -o 512MB
	
mpi_512MB: mpi_512MB.c
	mpicc mpi_512MB.c -o mpi_512MB
	
mpi_hola_def: mpi_hola.c
	mpicc mpi_hola.c -o mpi_hola_def
	
mpi_hola_mpich2: mpi_hola.c
	/opt/mpich2/gnu/bin/mpicc mpi_hola.c -o mpi_hola_mpich
	
multithreads: multithreads.c
	gcc multithreads.c -o multithreads -lpthread
