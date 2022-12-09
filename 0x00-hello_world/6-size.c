#include <stdio.h>

/**
 * main -print out of data type in c
 *
 * Return: 0
*/

int main(void)
{

printf("Size of a char: %c byte\n", sizeof(char));
printf("Size of an int: %d byte(S)\n", sizeof(int));
printf("Size of a long int: %ld byte(S)\n", sizeof(long int));
printf("Size of a long long int: %lld byte(S)\n", sizeof(long long int));
printf("Size of a float: %f byte(S)\n", sizeof(float));
return (0);
}
