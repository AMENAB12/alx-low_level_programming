#include <unistd.h>

/**
 * _putchar - writes the charachter c to stdout
 * @c: the character to print
 *
 * Return: 1
 * On error, -1 will returned
 */
int _putchar(char c)
{
	reurn (write(1,&c,1));
}
