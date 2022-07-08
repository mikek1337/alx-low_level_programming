#include "main.h"

/**
 * print_line - prints lines
 *
 * @n: number of times to print _
 *
 * Return: void
 */
void print_line(int n)
{
	 int i = n;
	while (i > 0)
	{
		_putchar('_');
		i--;
	}
	_putchar('\n');
}
