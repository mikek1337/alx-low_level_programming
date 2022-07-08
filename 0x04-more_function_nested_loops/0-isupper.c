#include "main.h"

/**
 * _isupper - checks for upper case character
 *
 * @c: the character that needs to be checked for upper case
 *
 * Return: 1 for is upper case, 0 for otherwise
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
