#include<stdlib.h>
#include "lists.h"

/**
 * pop_listint - removes the firs element from the list
 * @head: head of the list
 * Return: the head data
 */
int pop_listint(listint_t **head)
{
	 listint_t *tmp;
	 int headvalue;
	tmp = (*head);
	if (tmp == NULL)
		return (0);
	(*head) = tmp->next;
	tmp->next = NULL;
	headvalue = tmp->n;
	free(tmp);
	return (headvalue);
}
