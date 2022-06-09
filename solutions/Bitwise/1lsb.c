/*Write a C program to input any number from
user and check whether the Least Significant Bit (LSB)
of the given number is set (1) or not (0).*/

#include <stdio.h>

int main()
{
    int num;

    /* Input number from user */
    printf("Enter any number: ");
    scanf("%d", &num);

    /* If (num & 1) evaluates to 1 */
    if(num & 1)
        printf("LSB of %d is set (1).", num);
    else
        printf("LSB of %d is unset (0).", num);

    return 0;
}
