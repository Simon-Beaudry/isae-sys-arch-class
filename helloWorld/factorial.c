#include <stdio.h>
#include <math.h>

int main() {
  long i;
  long fact=1;
  long number;

  printf("Enter a number: ");
  scanf("%ld",&number);
    for(i=1;i<=number;i++){
       fact=fact*i;
     }
  printf("Factorial of %ld is: %ld \n",number,fact);
  printf("size of long: %ld \n",sizeof(int));

 return 0;

 }
