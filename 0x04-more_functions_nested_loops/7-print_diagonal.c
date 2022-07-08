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
	 int i = n;
	while (i > 0)
	{
		_putchar('\\');
		_putchar('\n');
		i--;
	}
	if (n >= 0)
	{
		_putchar('\n');
	}
}