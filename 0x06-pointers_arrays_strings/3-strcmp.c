#include "main.h"

/**
 * _strcmp - compare two strings
 *
 * @s1: first string
 *
 * @s2: second string
 *
 * Return: intger
 */
int _strcmp(char *s1, char *s2)
{
	 char c1;
	 char c2;
	 int i = 0;
	c1 = *(s1 + i);
	c2 = *(s2 + i);
	while (1 == 1)
	{
		if (c1 > c2)
			return (c1 - c2);
		else if (c2 > c1)
			return (c1 - c2);
		else if (c1 == '\0' && c2 == '\0')
			return (0);
		i++;
		c1 = *(s1 + i);
		c2 = *(s2 + i);
	}
}
