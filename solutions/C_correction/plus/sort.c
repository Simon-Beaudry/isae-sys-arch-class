#include <stdio.h>
void quicksort (int array[], int left, int right, int(*comp) ( int x, int y) ){
   printf("Inside quicksort\n");
   printf("the results of comparaison %d\n" , comp(array[left], array[right]));
}



int compare_gt( int x, int y) {
    printf("Inside the compare function\n");
    return x > y;

 }

int main(void) {
   int my_array[] = { 10, 5, 3 };
   quicksort(my_array, 0, 2, compare_gt);


}
