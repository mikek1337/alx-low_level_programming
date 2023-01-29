#include "search_algos.h"
/*
 * linear_search - uses linear search algorithm to find a value
 * @array: array to be searched
 * @size: length of the array
 * @value: value to be searched
 * Return: index of the value
 */

int linear_search(int *array, size_t size, int value)
{
	 size_t i = 0;
	while (i < size)
	{
		printf("Value checked array[%ld] = %d\n", i, array[i]);
		if (array[i] == value)
			return (i);
		i++;
	}
	return (-1);
}
