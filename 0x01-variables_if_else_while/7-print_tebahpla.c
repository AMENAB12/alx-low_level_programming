#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - prints the lowercase alphabet in reverse
 *
 * Return: 0
 *
 */
int main(void)
{
	char c = 'z';

	while (c >= 'a')
	{
		putchar(c);
		c--;
	}

	putchar('\n');
	return (0);
}
/** or */
#include <stdio.h>
int main(void)
{
char a = 'z';
for (a = 'z'; a >= 'a'; a--)
printf("%c\n", a);

}
