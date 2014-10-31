#include <stdio.h>
#include <mpi.h>

int main (int argc, char **argv) {
   int nProcId, nProcNo;

   int nNameLen;
   char szMachineName[MPI_MAX_PROCESSOR_NAME];

   MPI_Init (&argc, &argv); // Start up MPI

   MPI_Comm_size (MPI_COMM_WORLD,&nProcNo); // Find out number of processes
   MPI_Comm_rank (MPI_COMM_WORLD, &nProcId); // Find out process rank
   MPI_Get_processor_name (szMachineName, &nNameLen); // Get machine name

   printf ("Hello World from process %d on %s\r\n", nProcId, szMachineName);

   if (nProcId == 0) {
      printf ("Number of Processes: %d\r\n", nProcNo);

      char arr1[1024*1024*128];
      char arr2[1024*1024*128];
   }

   char arr3[1024*1024*128];
   char arr4[1024*1024*128];

   system("sleep 5");

   MPI_Finalize (); // Shut down MPI

   return 0;
}

