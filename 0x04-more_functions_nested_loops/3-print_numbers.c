#include "main.h"

/**
 * print_numbers - prints numbers from 0 - 9
 *
 * Return: 0 on success
 */
void print_numbers(void)
{
	 char i = 0;
	while (i < 10)
	{
		_putchar('0' + i);
		i++;
	}
	_putchar('\n');
}
