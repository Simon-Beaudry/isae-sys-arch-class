#include <stdio.h>
#include <time.h>

float findMin(float arr[]){
  float min = arr[0];
  for (size_t i = 0; i < 4; i++) {
    if (arr[i]< min ) {
      min = arr[i];
    }
  }
  return min;
}

void printStringArray (char my_string[]){
  int i = 0;
  while (my_string[i] != '\0') {
    printf("%c\n",my_string[i]);
    i++;
  }
}

void userInputArray(){
  int sizeOfArr = -1;
  printf("Enter a number between 1 and 10: ");

  while (sizeOfArr < 0) {
    scanf("%d", &sizeOfArr);
  }
  int arr[sizeOfArr];
  int input;

  printf("\nEnter %d elements: ",sizeOfArr);
  for (size_t i = 0; i < sizeOfArr; i++){
    scanf("%d", &input);
    arr[i] = input;
  }

  printf("[");
  for (size_t i = 0; i < sizeOfArr; i++) {
    printf("%d,",arr[i]);
  }
  printf("]");

}

int fibbonacci(int n) {
  if(n == 0){
     return 0;
  } else if(n == 1) {
     return 1;
  } else {
     return (fibbonacci(n-1) + fibbonacci(n-2));
  }
}

int main() {

  float arr[] = {10.2,5.3,4.5,3.3};
  char my_string[] = "I love C";

  clock_t begin = clock();
  fibbonacci(45);
  clock_t end = clock();
  double time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
  printf("time for calculation: %f\n", time_spent);

  //userInputArray();
  //printStringArray(my_string);
  //printf("size of array; %d = ", (int) sizeof(arr)/sizeof(arr[0]));
  //printf("Min value of array is: %f\n",findMin(arr));


  return 0;
}
