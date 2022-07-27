#include "main.h"

/**
 * string_toupper - converts lowercase characters to uppercase
 *
 * @str: string to be converted
 *
 * Return: character pointer
 */
char *string_toupper(char *str)
{
	 char c;
	 int i = 0;
	c = *(str + i);
	while (c != '\0')
	{
		if (c >= 'A' && c <= 'Z')
		{
			i++;
			c = *(str + i);
			continue;
		}
		else if (c >= 'a' && c <= 'z')
		{
			*(str + i) = c - 32;
		}
		i++;
		c = *(str + i);
	}
	return (str);
}
