#include "main.h"

/**
 * _strspn - gets length of prefix substring
 *
 * @s: string to be counted
 *
 * @accept: string to be matched
 *
 * Return: integer length
 */
unsigned int _strspn(char *s, char *accept)
{
	 unsigned int cnt = 0;
	 int i = 0;
	 char c;
	while (*accept != '\0')
	{
		i = 0;
		c = *(s + i);
		while (c != '\0')
		{
			if (c == *accept)
			{
				cnt++;
				break;
			}
			i++;
			c = *(s + i);
		}
		++accept;
	}
	return (cnt + 1);
}
