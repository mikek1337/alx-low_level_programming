#include "main.h"

/**
 * _isdigit - checks weather it is a digit or not
 *
 * @c: the character to be checked
 *
 * Return: 1 for true and 0 for false
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
