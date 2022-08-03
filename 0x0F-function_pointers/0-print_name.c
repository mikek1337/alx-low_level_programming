#include <stddef.h>
#include "function_pointers.h"

/**
 * print_name - a function that prints name
 * @name: name to be printed
 * @f: the function that transforms the name
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
