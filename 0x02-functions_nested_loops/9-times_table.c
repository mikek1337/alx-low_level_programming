#include "main.h"

/**
 * times_table - print the times table
 *
 * Return: void
 */
void times_table(void)
{
	 int i;
	 int j;
	for (i = 0; i <= 9; i++)
	{
		for (j = 1; j <= 9; j++)
		{
			_putchar(((i * j) % 10) + '0');
			_putchar(',');
		}
		_putchar('\n');
	}
}
