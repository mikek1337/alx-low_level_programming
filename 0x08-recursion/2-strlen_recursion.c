#include "main.h"

/**
 * _strlen_recursion - returns length of a string
 * @s: string to be counted
 * Return: length
 */
int _strlen_recursion(char *s)
{
	int i = 0;
	if (*s == '\0')
	{
		return (i);
	}
	i++;
	s++;
	_strlen_recursion(s);
}
