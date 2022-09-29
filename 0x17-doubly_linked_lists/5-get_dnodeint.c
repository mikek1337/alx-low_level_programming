#include<stdlib.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - get node on index
 * @head: head of the list
 * @index: index on the list
 * Return: node on the index
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	 dlistint_t *tmp;
	 unsigned int count = 0;
	tmp = head;
	while (tmp != NULL)
	{
		if (count == index)
			return (tmp);
		tmp = tmp->next;
		count++;
	}
	return (NULL);
}
