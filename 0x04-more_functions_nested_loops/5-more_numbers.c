#include "main.h"

/**
 * more_numbers - prints 0 - 14ten times
 *
 * Return: void
 */
void more_numbers(void)
{
	 int i = 0;
	 int j;
	while (i <= 9)
	{
		j = 0;
		while (j <= 14)
		{
			_putchar(j % 10 + '0');
			j++;
		}
		i++;
		_putchar('\n');
	}
}
