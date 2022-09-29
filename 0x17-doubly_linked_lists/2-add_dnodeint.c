#include<stdlib.h>
#include "lists.h"

/**
 * add_dnodeint - add new node at the beginning of the list
 * @head: head of the list
 * @n: data to be added
 * Return: address of the new element
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	 dlistint_t *new;
	 dlistint_t *temp;
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		temp = *head;
		new->next = *head;
		temp->prev = new;
		*head = new;
	}
	return (new);
}
