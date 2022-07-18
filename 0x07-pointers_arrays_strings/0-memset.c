#include "main.h"

/**
 * _memset - replaces n memory spaces with a given character
 *
 * @s: pointer that points to a string
 *
 * @n: the number of characters to be replaced
 *
 * @b: the character to replace
 *
 * Return: char pointer
 */
char *_memset(char *s, char b, unsigned int n)
{
	 unsigned int i = 0;
	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}
	return (s);
}
