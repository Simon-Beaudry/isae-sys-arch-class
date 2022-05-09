#include <stdio.h>

void inc(int *p_i){
  *p_i +=1;
}


int main() {

  int my_int = 1;
  int *p_i = &my_int;

  int **p = &p_i;

  inc(p_i);

  //printf("%d\n", my_int);
  printf("%p\n", NULL);

  return 0;
}
