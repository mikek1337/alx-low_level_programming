#include "main.h"

/**
 * _islower - determines if it is lower case or not
 *
 * @c: parameter integer type
 *
 * Return: 0 not lower case , 1 is lower case
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
