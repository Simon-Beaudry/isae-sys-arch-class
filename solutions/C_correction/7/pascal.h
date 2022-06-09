
#ifndef PASCAL_H
#define PASCAL_H

/**
 * @brief Create Pascal's triangle
 *
 * @param size the size of Pascal's triangle
 * @param array an array of `size` pointers to int to be filled
 *        with Pascal's triangle
 */
void create_pascal_triangle(int size, int *array[size]);

/**
 * @brief Print Pascal's triangle
 *
 * @param size the size of Pascal's triangle
 * @param array an array of `size` pointers to int to print
 */
void print_pascal_triangle(int size, int *array[size]);

/**
 * @brief Create a single row of Pascal's triangle
 *
 * @param size the size of the row
 * @return a pointer to a dynamically allocated memory region
 *         containing `size` ints
 */
int *create_single_row(int size);

/**
 * @brief Create Pascal's triangle with Iliffe's vector
 *
 * @param size the size of Pascal's triangle
 * @return an array of `size` pointers. Each pointer points to
 *         a dynamically allocated region containing a row (see
 *         `create_single_row`)
 */
int **create_pascal_triangle_iliffe(int size);

/**
 * @brief Free Pascal's triangle
 *
 * @param size the size of Pascal's triangle
 * @param triangle the Iliffe's vector for Pascal's triangle
 *
 * @post after execution, all dynamically allocated memory regions
 *       used for Pascal's triangle are freed. DO NOT USE `triangle`
 *       ANYMORE!
 */
void free_triangle(int size, int **triangle);

/**
 * @brief Print an array of integers
 *
 * @param size the size of the array
 * @param array the array to be printed
 */
void print_array(int size, int array[size]);

#endif
