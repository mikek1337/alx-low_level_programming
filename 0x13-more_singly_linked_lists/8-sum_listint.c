#include<stdlib.h>
#include "lists.h"

/**
 * sum_listint - return the node of the index specified from the list
 * @head: head of the list
 * Return: the node of the specified index
 */
int sum_listint(listint_t *head)
{
	 listint_t *tmp;
	 int sum = 0;
	tmp = head;
	while (tmp != NULL)
	{
		sum += tmp->n;
		tmp = tmp->next;
	}
	return (sum);
}
