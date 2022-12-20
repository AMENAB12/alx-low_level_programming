#include "main.h"
#include <stdio.h>

/**
 * print_array - elements of an array of integers
 * @a: integer array
 * @n: Array to print
 */
void print_array(int *a, int n)
{
	int j;

	for (j = 0; j < n; j++)
	{
		printf("%d", a[j]);
		if (j != (n - 1))
		{
			printf(", ");
		}
	}
	printf("\n");
}
