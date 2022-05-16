#include <stdio.h>

//reset second element
void reset_snd_elt(int array[]){
  //*(array+1);
  array[1] =  0;
}

int main(){

  int array[5]={10,22,33,4,5};
  int *p_int;

  p_int = array;

  printf("%X\n",array[0]);
  printf("%X\n",*(p_int+0));

  printf("%X\n",array[1]);
  reset_snd_elt(array);
  printf("%X\n",array[1]);
  printf("%d\n",sizeof(array[1]));

  return 0;

}


/*
char **argv
a pointer that will point to a pointer of char

int *comp()
defines a function that returns a pointer to an int

int (*comp)()
defines a function that returns an int

char (*x())[]

*/
