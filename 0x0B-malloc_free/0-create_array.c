#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates array
 *
 * @size: size of the array
 *
 * @c: charater to be assigned
 *
 * Return: pointer
 */
char *create_array(unsigned int size, char c)
{
	 char *t;
	 unsigned int i;
	t = malloc(sizeof(c) * size);
	if (size == 0)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		t[i] = c;
	}
	return (t);
}
