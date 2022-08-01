#include "dog.h"
#include <stdlib.h>

/**
 * _strlen - return length of string
 * @s: string to be counted
 * Return: number
 */
int _strlen(char *s)
{
	 int i = 0;
	 char c;
	c = *(s + i);
	while (c != '\0')
	{
		i++;
		c = *(s + i);
	}
	return (i);
}

/**
 * _strcpy - copy string
 * @s: string to be copied
 * Return: char pointer
 */
char *_strcpy(char *s)
{
	 char *s_copy;
	 int i;
	 int len = _strlen(s);
	s_copy = malloc(sizeof(s));
	if (s_copy == NULL)
		return (NULL);
	for (i = 0; i < len; i++)
	{
		*(s_copy + i) = *(s + i);
	}
	return (s_copy);
}

/**
 * new_dog - copy name and owner
 * @name: name of a dog
 * @age: age of a dog
 * @owner: owner of a dog
 * Return: new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	 dog_t *d;
	 char *c_name = _strcpy(name);
	 char *c_owner = _strcpy(owner);
	d = malloc(sizeof(dog_t));
	if (c_name == NULL || c_owner == NULL || d == NULL)
		return (NULL);
	d->name = c_name;
	d->owner = c_owner;
	d->age = age;
	return (d);
}
