#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_nodeint - adds node to the beginning of the list
 * @head: the head of the list
 * @n: the number that needs to be added
 * Return: list pointer
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	 listint_t *node;
	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);
	node->n = n;
	if (head == NULL)
		node->next = NULL;
	else
		node->next = *head;
	*head = node;
	return (node);
}
