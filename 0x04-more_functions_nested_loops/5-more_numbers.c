#include "main.h"

/**
 * more_numbers - prints 0 - 14ten times
 *
 * Return: void
 */
void more_numbers(void)
{
	 int i = 0;
	 int j = 0;
	while (i <= 9)
	{
		while (j <= 14)
		{
			_putchar('0' + j);
		}
		_putchar('\n');
	}
}
