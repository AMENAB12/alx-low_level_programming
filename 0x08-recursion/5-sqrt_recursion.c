#include "main.h"

int _sqrt(int n, int x)

/**
 * _sqrt_recursion - natural square root of a number.
 *
 * @n: squared number
 *
 * Return: value of n
 */

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt - calculate natural square root
 * @n: number to calculate
 * @i: interate number
 *
 * Return: tha natural square root
 */
int _sqrt(int n, int x)
{
	int sqrt = x * x;

	if (sqrt > n)
		return (-1);
	if (sqrt == n)
		return (x);

	return (_sqrt(n.x + 1));
}
