#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_nodeint - adds node to the beginning of the list
 * @head: the head of the list
 * @str: the string that needs to be added
 * Return: list pointer
 */
list_t *add_nodeint(list_t **head, char *str)
{
	 list_t *node;
	 unsigned int count = 0;
	node = malloc(sizeof(list_t));
	if (node == NULL)
		return (NULL);
	node->str = strdup(str);
	while (*str != '\0')
	{
		str++;
		count++;
	}
	node->len = count;
	if (head == NULL)
		node->next = NULL;
	else
		node->next = *head;
	*head = node;
	return (node);
}
