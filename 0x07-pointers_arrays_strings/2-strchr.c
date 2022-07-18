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
	unsigned int i = 0;
	unsigned int found = 0;
	char b;
	char *temp;
	b = *(s + i);
	while (b != '\0')
	{
		printf("%c\n",b);
		if(b == c)
		{
			temp = s;
			c = *(temp + i);
			
			while (c != '\0')
			{
				printf("%c", c);
				i++;
				c = *(temp + i);
				*(s + found) = c;
				found++;
			}
			return (s);
		}
		i++;
		b = *(s + i);
	}
	return (NULL);
}
