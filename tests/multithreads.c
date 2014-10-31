/*
 Programa que lanza N hilos y queda en loop infinito
 Usado para probar que un trabajo con 1 core no consuma más de 100% de CPU
 */

#include <pthread.h>
#include <stdio.h>
#define NUM_THREADS     5

void InifinitLoop() {
   int i = 0;
   while (1==1) {
      i++;
   }
}

void *PrintHello(void *threadid)
{
   long tid;
   tid = (long)threadid;
   printf("Hello World! It's me, thread #%ld!\n", tid);
   InifinitLoop();
   pthread_exit(NULL);
}

int main (int argc, char *argv[])
{
   pthread_t threads[NUM_THREADS];
   int rc;
   long t;
   for(t=0; t<NUM_THREADS; t++){
      printf("In main: creating thread %ld\n", t);
      rc = pthread_create(&threads[t], NULL, PrintHello, (void *)t);
      if (rc){
         printf("ERROR; return code from pthread_create() is %d\n", rc);
         exit(-1);
      }
   }

   InifinitLoop();

   /* Last thing that main() should do */
   pthread_exit(NULL);
}

