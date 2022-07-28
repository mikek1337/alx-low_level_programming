#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * array_range - prints the min to max
 * @min: the start value
 * @max: the end value
 * Return: new pointer
 */
int *array_range(int min, int max)
{
	 int *new_array;
	 int i;
	 int total;
	if (min > max)
		return (NULL);
	total = min + max + 1;
	new_array = malloc(sizeof(int) * total);
	printf("%d\n", total);
	if (new_array == NULL)
		return (NULL);
	for (i = 0; i < total; i++)
	{
		new_array[i] = min + i;
	}
	return (new_array);
}
