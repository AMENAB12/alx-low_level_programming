#include "main.h"

/**
 * _puts_recursion - write string followed by newline
 *
 * @s: the string
 *
 * Return: 0.
 */
void _puts_recusion(char *s)
{

	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}

	_putchar(*s);
	s++;
	_puts_recursion(s);
}


