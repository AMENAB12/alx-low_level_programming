#include "main.h"
/**
 * _isalpha - function that check alphabet
 *
 * @c: is the integer to be tested
 *
 * Return: returns 1 if c is an alphabet, returns 0 if it is not
 */
int _isalpha(int c)
{
	if ((c > 64 && c < 91) || (c > 96 && c < 123))
		return (1);
	else
		return (0);
}
