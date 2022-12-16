#include "main.h"

/**
 * _isupper - checks for uppercase
 * @c: character that checked
 * Return: 0 for others and 1 if c is uppercase
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
