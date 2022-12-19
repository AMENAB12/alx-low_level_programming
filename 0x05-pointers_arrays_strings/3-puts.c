#include "main.h"

/**
 * _puts - print string
 * @str: printed string
 * Return: Void
 */
void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
	_putchar(*str);
	}
	_putchar('\n');
}
