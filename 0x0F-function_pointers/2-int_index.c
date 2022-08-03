#include <stddef.h>
#include "function_pointers.h"

/**
 * int_index - search's element the array and returns it first occurence index
 * @array: the array that is going to be searched
 * @size: size of the array
 * @cmp: a function that search's the array
 * Return: on success the index of the array
 * if size is less than 0 then -1
 * if no match found -1
 */
int int_index(int *array, int size, int(*cmp)(int))
{
	 int i;
	 int match;
	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		match = cmp(array[i]);
		if (match)
			return (i);
	}
	return (-1);
}
