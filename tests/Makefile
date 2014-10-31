512MB.ram: 512MB.ram.c
	gcc 512MB.ram.c -o 512MB.ram.c
	
mpi_512MB.ram: mpi_512MB.ram.c
	mpicc 512MB.ram.c -o 512MB.ram.c
	
mpi_hola_def: mpi_hola.c
	mpicc mpi_hola.c -o mpi_hola
	
mpi_hola_mpich2: mpi_hola.c
	/opt/mpich2/gnu/bin/mpicc mpi_hola.c -o mpi_hola
	
multithreads: multithreads.c
	gcc multithreads.c -o multithreads -lthreads