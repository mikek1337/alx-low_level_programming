#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end - adds node to the end
 * @head: head of the linked list
 * @str: value that needs to be added
 * Return: pointer to the new data
 */
list_t *add_nodeint_end(list_t **head, const char *str)
{
	 list_t *current;
	 list_t *new_node;
	 int c;
	current = *head;
	while (current && current->next != NULL)
		current = current->next;
	for (c = 0; str[c] != '\0'; c++)
		;
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->len = c;
	new_node->next = NULL;
	if (current)
		current->next = new_node;
	else
		*head = new_node;
	return (new_node);
}
