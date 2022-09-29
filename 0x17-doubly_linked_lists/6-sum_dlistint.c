#include<stdlib.h>
#include "lists.h"

/**
 * sum_dlistint - total sum of list
 * @head: head of the list
 * Return: sum of the list
 */
int sum_dlistint(dlistint_t *head)
{
	 dlistint_t *tmp = head;
	 int sum = 0;
	while (tmp != NULL)
	{
		sum += tmp->n;
		tmp = tmp->next;
	}
	return (sum);
}
