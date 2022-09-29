#include<stdlib.h>
#include "lists.h"

/**
 * add_dnodeint_end - add node at the end
 * @head: head of the list
 * @n: the data to be inserted
 * Return: new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	 dlistint_t *new_node;
	 dlistint_t *temp;
	new_node = malloc(sizeof(dlistint_t));
	temp = *head;
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		while (temp != NULL)
		{
			if (temp->next == NULL)
			{
				temp->next = new_node;
				new_node->prev = temp;
				new_node->next = NULL;
			}
			temp = temp->next;
		}
	}

	return (new_node);
}
