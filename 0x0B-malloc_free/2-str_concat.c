#include "main.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * str_concat - concatenates two strings
 *
 * @s1: first string
 *
 * @s2: second string
 *
 * Return: string
 */
char *str_concat(char *s1, char *s2)
{
	 int s1_size = 0;
	 int s2_size = 0;
	 int total_size = 0;
	 int i;
	 int j;
	 char *concat;
	if (s1 != NULL)
	{
		s1_size = strlen(s1);
	}
	if (s2 != NULL)
	{
		s2_size = strlen(s2);
	}
	total_size = s1_size + s2_size;
	total_size = total_size - 2;
	if (s1 == NULL && s2 == NULL)
	{
		s1_size = 0;
		s2_size = 0;
	}
	concat = malloc(sizeof(char) * total_size);
	if (concat == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < s1_size; i++)
	{
		if (s1[i] == '\0')
			continue;
		concat[i] = s1[i];
	}
	for (j = 0; j < s2_size; j++)
	{
		concat[i + j] = s2[j];
		/*printf("%d",i + j);*/
	}
	return (concat);
}
