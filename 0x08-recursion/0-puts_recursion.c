#include "main.h"
#include <stdio.h>
/**
 * _puts_recursion - write string
 * @s: the string 
 * Return: 0
 */
void _puts_recusion(char *s)
{
	if(*s == '\0')
	{
		putchar('\n');
		return;
	}
	putchar(*s);
	s++;
	_puts_recursion(s);
}


