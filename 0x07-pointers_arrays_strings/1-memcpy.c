#include "main.h"

/**
 * _memcpy - copy memory area
 *
 * @dest: copy to
 *
 * @src: copied from
 *
 * @n: number of characters to be copied
 *
 * Return: character pointer
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	 unsigned int i;
	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}
