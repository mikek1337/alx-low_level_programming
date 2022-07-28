#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - checks if malloc assigned memory
 * @b: size of the memory
 * Return: void
 */
void *malloc_checked(unsigned int b)
{
	 int *m;
	m = malloc(b);
	if (m == 0)
		exit(98);
	return (m);
}
