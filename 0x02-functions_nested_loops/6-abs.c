#include "main.h"

/**
 * _abs - evaluates the absolute value
 *
 * @n: integer type number to be evaluated
 *
 * Return: positive value of the number
 */
int _abs(int n)
{
	if (n < 0)
	{
		return (n * -1);
	}
	return (n);
}
