#include <stdio.h>
#include <stdlib.h>
 
#include <sys/time.h>

#define  size  10000
int  A[size][size]; 
int  B[size][size];

int    main  ()  {
   
   struct timeval begin, end;


   gettimeofday(&begin, NULL);
   for (int i=0; i<size; i++) {
      for(int j=0; j<size; j++) {
        A[i][j] = i+j;
     }

   }
   
   for (int i=0; i<size; i++) {
      for(int j=0; j<size; j++) {
          B[i][j] = A[i][j] ;
      }
   }
   gettimeofday(&end, NULL);

   for (int i=0; i<size; i++) {
     for(int j=0; j<size; j++) {
        if  (B[i][j]!= i+j ) {
            printf("Error at iteration  i=%d, j=%d: %d!=%d  \n", i, j,B[j][j], i+j );
            exit(1);
        } 
     }
   }
   
   unsigned long  time = (end.tv_usec + (end.tv_sec * 1000000))-(begin.tv_usec + (begin.tv_sec * 1000000));
   printf("time= %ld us\n" , time);
   return 0; 
}
