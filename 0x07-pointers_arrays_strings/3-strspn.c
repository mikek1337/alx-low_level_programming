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
	 char b;
	 int j = 0;
	b = *(accept + j);
	while (b != '\0')
	{
		i = 0;
		c = *(s + i);
		while (c != '\0')
		{
			if (c == b)
			{
				cnt++;
				break;
			}
			i++;
			c = *(s + i);
		}
		if (*(accept + j) != *(s + i))
		{
			break;
		}
		j++;
		b = *(accept + j);
	}
	return (cnt);
}
