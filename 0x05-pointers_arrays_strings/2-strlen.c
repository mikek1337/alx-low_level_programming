#include "main.h"

/**
 * _strlen - count the number of characters
 *
 * @s: characters pointer
 *
 * Return: length od the string
 */
int _strlen(char *s)
{
	 char c = *(s + 0);
	 int cnt = 0;
	while (c != '\0')
	{
		cnt++;
		c = *(s + cnt);
	}
	return (cnt);
}
