#include "main.h"

/**
 * _strlen_recursion - returns length of a string
 * @s: string to be counted
 * Return: length
 */
int _strlen_recursion(char *s)
{
	 int i;
	if (*s > '\0')
	{
		i +=  (_strlen_recursion(s)) + 1;
		s++;
	}
	return (i);
}
