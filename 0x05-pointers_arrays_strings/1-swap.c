#include <stdio.h>
/**
 * swap_int - Swap the values of two integres.
 * @a: The first integer to be swapped.
 * @b: The second integer to be swapped.
 *
 * Return: nothing
 */
void swap_int(int *a, int *b)
/* the function that swap the values of tow integres. */
{
int temp = *a;
*a = *b;
*b = temp;
}
