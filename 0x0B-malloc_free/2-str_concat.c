#include "main.h"
#include <string.h>
/**
 * str_concate - concatenates two strings
 *
 * @s1: first string
 *
 * @s2: second string
 *
 * Return: string
 */
char *str_concate(char *s1, char *s2)
{
	 int s1_size = strlen(s1);
	 int s2_size = strlen(s2);
	 int total_size = s1_size + s2_size;
	 int i;
	 int j;
	total_size = total_size - 1;
	if (s1 == NULL || S2 == NULL)
	{
		return (NULL);
	}
	 char *concat = malloc(sizeof(char) * total_size);
	if (concat == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < s1_size; i++)
	{
		concat[i] = s1[i];
	}
	i++;
	for (j = 0; j < s2_size; j++)
	{
		concat[i + j] = s2[j];
	}
	return (concat);
}
