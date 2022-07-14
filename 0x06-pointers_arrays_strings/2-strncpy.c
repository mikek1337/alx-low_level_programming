include "main.h"

/**
 * _strncpy - copy src string to dest string
 *
 * @dest: the string that is going to be copied to
 *
 * @src: the source string
 *
 * @n: number of characters to be copied.
 *
 * Return: string pointer
 */
char *_strncpy(char *dest, char *src, int n)
{
	 int i;
	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
