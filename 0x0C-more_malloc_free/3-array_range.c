#include <stdlib.h>
#include "main.h"

/**
 * *array_range - creates an array
 * @min: minimum range
 * @max: maximum range
 *
 * Return: pointer to the new array
 */
int *array_range(int min, int max)
{
int *ptr;
if(min > max)
return (NULL);
ptr = malloc(sizeof(int) * (max-min));
if (ptr == NULL)
return (NULL);
return (ptr);
}
