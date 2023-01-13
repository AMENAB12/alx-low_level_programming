#include "main.h"
#include <stdlib.h>
/**
 * *malloc_checked - allocates memory
 * @b: number of bytes to allocate
 *
 * Return: a pointer
 */

void *malloc_checked(unsigned int a)
{
void *ptr;
ptr = malloc(a);
if (ptr == NULL)
{
exit(98);
}
return (ptr);
}
