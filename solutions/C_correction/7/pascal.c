 

#include <stdio.h>
#include <stdlib.h>

#include "pascal.h"

void create_pascal_triangle(int size, int *array[size]) {
    if (size == 0) {
        return;
    }

    array[0][0] = 1;

    for (int i = 1; i < size; i++) {
        array[i][0] = 1;
        array[i][i] = 1;

        for (int j = 1; j < i; j++) {
            array[i][j] = array[i - 1][j - 1] + array[i - 1][j];
        }
    }
}

void print_pascal_triangle(int size, int *array[size]) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j <= i; j++) {
            printf("%3d ", array[i][j]);
        }

        printf("\n");
    }
}

int *create_single_row(int size) {
    int *p_to_row = NULL;

    p_to_row = malloc(size * sizeof(int));

    if (p_to_row == NULL) {
        printf("there is a problem with malloc!\n");
    }

    return p_to_row;
}

int **create_pointers_array(int size) {
    int **p_to_array = NULL;

    p_to_array = malloc(size * sizeof(int *));

    if (p_to_array == NULL) {
        printf("there is a problem with malloc!\n");
    }

    return p_to_array;
}

int **create_pascal_triangle_iliffe(int size) {
    int **triangle = create_pointers_array(size);

    for (int i = 0; i < size; i++) {
        triangle[i] = create_single_row(i + 1);
    }

    create_pascal_triangle(size, triangle);

    return triangle;
}

void free_triangle(int size, int **triangle) {
    for (int i = 0; i < size; i++) {
        free(triangle[i]);
    }

    free(triangle);
}

void print_array(int size, int array[size]) {
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }

    printf("\n");
}
