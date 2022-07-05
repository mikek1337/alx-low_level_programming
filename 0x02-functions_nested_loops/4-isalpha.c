#include "main.h"

/**
 * _isalpha - determines if it is an alphabet or not
 *
 * @c: parameter integer type
 *
 * Return: 0 not alphabet , 1 is alphabet
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 123) || (c >= 65 && c <= 91))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
