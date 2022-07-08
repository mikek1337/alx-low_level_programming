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
	 int num;
	while (i <= 9)
	{
		j = 0;
		num = j;
		while (j <= 14)
		{
			if (j > 9)
			{
				_putchar('1');
				num = j % 10;
			}
			_putchar('0' + num);
			j++;
		}
		i++;
		_putchar('\n');
	}
}
