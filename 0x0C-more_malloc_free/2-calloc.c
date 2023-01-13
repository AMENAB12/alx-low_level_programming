#include <stdlib.h>
#include "main.h"
/**
 * *_calloc - allocates memory
 * @ab: number of elements
 * @size: size element
 *
 * Return: pointer to allocated memory
 */
void *_calloc(unsigned int ab, unsigned int size)
{
int *loc;
if (ab == 0 || size == 0)
return (NULL);
loc = malloc(ab * size);
if (!loc)
return (NULL);
return (loc);
}
