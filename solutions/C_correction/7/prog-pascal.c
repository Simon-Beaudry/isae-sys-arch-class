 

#include <stdio.h>
#include <stdlib.h>

#include "pascal.h"

int main(void) {
    // define a simple Pascal triangle in main

    int size = 4;
    int row1[1] = { 0 };
    int row2[2] = { 0 };
    int row3[3] = { 0 };
    int row4[4] = { 0 };

    int *pascal_triangle[] = {row1, row2, row3, row4};

    create_pascal_triangle(size, pascal_triangle);
    print_pascal_triangle(size, pascal_triangle);

    // dynamically create a row and print it
    printf("\ntrying create_single_row...\n");
    int *my_row = create_single_row(5);
    print_array(5, my_row);

    my_row[0] = 0;
    my_row[1] = 1;
    my_row[2] = 2;
    my_row[3] = 3;
    my_row[4] = 4;

    print_array(5, my_row);

    free(my_row);
    my_row = NULL;

    // create pascal "real" triangle
    printf("\ntrying dynamic Pascal...\n");
    int **pascal_real_triangle = create_pascal_triangle_iliffe(8);
    print_pascal_triangle(8, pascal_real_triangle);

    free_triangle(8, pascal_real_triangle);
    pascal_real_triangle = NULL;

    return 0;
}
