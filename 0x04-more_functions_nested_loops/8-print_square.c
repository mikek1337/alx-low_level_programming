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
	while (i < size)
	{
		_putchar('#');
		i++;
	}
	_putchar('\n');
}
