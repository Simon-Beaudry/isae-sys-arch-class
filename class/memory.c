#include <stdio.h>
#include <stdlib.h>


//check if not NULL
int *create_singlerow(int size){
  int *arr = malloc(sizeof(int) * size);
  if (arr != NULL) {
    return arr;
  }
    else {return 0;}
}

int **create_singlerow_pointers(int size){
  int **arr = malloc(sizeof(int*) * size);
  if (arr != NULL) {
    return arr;
  }
  else {return 0;}
}

int main(){

  int columns = 3;
  int **row_1 = create_singlerow(columns);

  return 0;
}
