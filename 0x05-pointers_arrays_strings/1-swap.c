#include "main.h"

/**
 * swap_int - swap the value of the two parameters
 *
 * @a: the first variable to swap
 *
 * @b: the second variable to swap
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
