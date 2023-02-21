#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 *
 * @n: printed number
 *
 * Return: value of the last digit
 */
int print_last_digit(int n)
{
	int nac, lastdigit;

	lastdigit = n % 10;
	if (lastdigit < 0)
		lastdigit *= -1;
	nac = lastdigit + '0';
	_putchar(nac);
	return (lastdigit);
}
