#include <stdio.h>

/**
 * swap_int - swaps the values of two integers
 * @a: swapped int
 * @b: swapped int
 *
 * Return: 0
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
