#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat - concat strings
 * @s1: first string
 * @s2: second string
 * @n: number of character copied
 * Return: char pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	 char *new_s;
	 unsigned int i;
	 unsigned int j;
	 unsigned int n1;
	 unsigned int n2;
	if (s1 == NULL)
		n1 = 0;
	else
		n1 = strlen(s1);
	if (s2 == NULL)
		n2 = 0;
	else
		n2 = strlen(s2);

	if (n > n2)
		n = n2;
	new_s = malloc(n + n1 + 1);
	if (new_s == NULL)
		return (NULL);
	for (i = 0; i < n1; i++)
	{
		if (s1[i] == '\0')
			break;
		new_s[i] = s1[i];
	}
	for (j = 0; j < n; j++)
	{
		new_s[i + j] = s2[j];
	}
	new_s[n + n1 + 1] = '\0';
	return (new_s);
}
