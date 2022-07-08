#include "main.h"

/**
 * print_diagonal - prints / n number of times
 *
 * @n: the number of times / print
 *
 * Return: void
 */
void print_diagonal(int n)
{
	 int i = 0;
	 int j;
	while (i < n && n > 0)
	{
		j = 0;
		while (j < i)
		{
			_putchar(' ');
			j++;
		}
		_putchar('\\');
		_putchar('\n');
		i++;
	}
	if (i == 0)
	{
		_putchar('\n');
	}
}
