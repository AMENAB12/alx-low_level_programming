#include "function_pointers.h"

/**
 * print_name - a function that print name.
 * @name: the name given for the function
 * @f: name of function
 *
 * Rteurn: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)

		f(name);
}
