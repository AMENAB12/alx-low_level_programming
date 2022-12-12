#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - prints all single digit numbers of base 10 starting from 0
 * Description: prints all single digit number of base 10
 * Starting from 0, follow by new line
 * Return: Always 0
 */
int main(void)
{
	char c = '0';

	while (c <= '9')

	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
