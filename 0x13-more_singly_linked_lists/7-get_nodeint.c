#include<stdlib.h>
#include "lists.h"

/**
 * get_nodeint_at_index - return the node of the index specified from the list
 * @head: head of the list
 * @index: the index specified to be returned
 * Return: the node of the specified index
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	 listint_t *tmp;
	 unsigned int count = 0;
	tmp = head;
	while (tmp != NULL && count != index)
	{
		count++;
		tmp = tmp->next;
	}
	return (tmp);
}
