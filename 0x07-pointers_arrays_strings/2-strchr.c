#include "main.h"
#include <stddef.h>
#include <stdio.h>
/**
 * _strchr - searches character in a string.
 *
 * @s: string to be searched
 *
 * @c: the character to be found
 *
 * Return: character pointer
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		++s;
	}

	if (*s == c)
	{
		return (s);
	}
	return (NULL);
}
