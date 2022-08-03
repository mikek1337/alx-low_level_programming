#include <stddef.h>
#include "function_pointers.h"
#include <stdint.h>
/**
 * array_iterator - iterates through an array and performs actions
 * @array: the array used
 * @size: size of the array
 * @action: a function that performs tasks
 */
void array_iterator(int *array, size_t size, void(*action)(int))
{
	 unsigned int i;
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
