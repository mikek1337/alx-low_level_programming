#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 * _strdup - duplicates string
 *
 * @s: the string to be duplicated
 *
 * Return: char pointer
 */
char *_strdup(char *s)
{
	 int size = strlen(s);
	 char *strdu;
	 int i;
	strdu = malloc(sizeof(s) * size);
	if (strdu == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		strdu[i] = s[i];
	}
	return (strdu);
}
