#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - frees list
 * @head: head of linked list
 */
void free_listint2(listint_t **head)
{
	 listint_t *tmp;
	 listint_t *next;
	tmp = (*head);
	while (tmp != NULL)
	{
		next = tmp->next;
		free(tmp);
		tmp = next;
	}
	(*head) = NULL;
}
