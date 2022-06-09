#include <stdio.h>

int main(void) {
    float my_array[10] = { 1.0, 2.0, -1.0, 15.0, 11.0, -6.0, 8.0, 1.0, -2.0 };
    int   index        = 0;
    float min          = my_array[0];

    for (int i = 1; i < 10; i++) {
        if (my_array[i] < min) {
            index = i;
            min   = my_array[i];
        }
    }

    printf("The minimum is %f and is located at index %d.\n", min, index);

    // possible only at declaration!
   //  my_array = { 1.0, 2.0 };

    // invalid initializer
    // float my_snd_array[10] = my_array;


    // array assignement not possible
    // float my_snd_array[10];
     //my_snd_array = my_array;

    return 0;
}
