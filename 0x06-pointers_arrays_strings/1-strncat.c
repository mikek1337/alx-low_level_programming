#include "main.h"

/**
 * _strncat - concatenates src to dest with the specified number of characters
 *
 * @dest: the string to append to.
 *
 * @src: the string to be appended to.
 *
 * @n: number of characters to be appended
 *
 * Return: string pointer
 */
char *_strncat(char *dest, char *src, int n)
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
			while (j < n && c != '\0')
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
