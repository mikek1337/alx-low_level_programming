#include "main.h"
#include <stdio.h>
/**
 * reverse_array - reverses array
 *
 * @a: the array to be reversed
 *
 * @n: number of elements
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	 int i = 0;
	 int temp;
	while (i < n / 2)
	{
		temp = *(a + n - 1 - i);
		*(a + n - 1 - i) = *(a + i);
		*(a + i) = temp;
		i++;
	}
}
