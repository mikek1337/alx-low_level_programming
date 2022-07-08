#include "main.h"

/**
 * print_square - prints # n number of times
 *
 * @size: number of times
 *
 * Return: void
 */
void print_square(int size)
{
	 int i = 0;
	 int j;
	while (i < n && n > 0)
	{
		while (j < size)
		{
			_putchar('#');
			j++;
		}
		_putchar('\n');
		i++;
	}
}
