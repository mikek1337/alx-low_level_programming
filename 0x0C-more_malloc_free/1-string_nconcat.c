#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat - concat strings
 * @s1: first string
 * @s2: second string
 * Return: char pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char * new_s;
	unsigned int n1 = strlen(s1);
	unsigned int n2 = strlen(s2);
	unsigned int i;
	unsigned int j;

	if (n > n2)
		n = n2;
	new_s = malloc(n + n1);
	if (new_s == NULL)
		return (NULL);
	for (i = 0; i < n1; i++)
	{
		if(s1[i] == '\0')
			break;
		new_s[i] = s1[i];
	}
	for (j = 0; j < n; j++)
	{
		new_s[i + j] = s2[j];
	}
	return (new_s);
}
