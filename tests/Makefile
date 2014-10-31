all: 512MB mpi_512MB multithreads

512MB: 512MB.c
	gcc 512MB.c -o 512MB
	
mpi_512MB: mpi_512MB.c
	mpicc mpi_512MB.c -o mpi_512MB

multithreads: multithreads.c
	gcc multithreads.c -o multithreads -lpthread
