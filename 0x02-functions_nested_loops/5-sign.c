#include "main.h"

/**
 * print_sign - determine if a number is greater, less than or equal to zero.
 *
 * @n: intger type the number that is being evaluated
 *
 * Return: 1 if it is positive, 0 if it is 0 and -1 if it is negative
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
