#include "main.h"
#include <stdio.h>

/**
 * _puts - print string
 * @str: printed string
 * Return: Void
 */
void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
	putchar(*str);
	}
	putchar('\n');
}
