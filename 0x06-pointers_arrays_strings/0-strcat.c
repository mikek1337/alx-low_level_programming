#include "main.h"

/**
 * _strcat - concatnates two strings.
 *
 * @dest: string that is append to.
 *
 * @src: string to be appended.
 *
 * Return: appended string pointer
 */
char *_strcat(char *dest, char *src)
{
	 char c;
	 int i = 0;
	 int j = 0;
	c = *(dest + i);
	while (c != '\0')
	{
		i++;
		c = *(dest + i);
		if (c == '\0')
		{
			c = *(src + j);
			while (c != '\0')
			{
				*(dest + i + j) = c;
				j++;
				c = *(src + j);
			}
			*(dest + i + j) = '\0';
			break;
		}
	}
	return (dest);
}
