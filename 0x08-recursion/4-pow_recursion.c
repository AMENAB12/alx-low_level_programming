#include "main.h"
#include <math.h>

/**
 * _pow_recursion - return y is power of x
 *
 * @x: base
 * @y: power
 * Retrun: int value
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));

}
