#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - frees list
 * @head: head of linked list
 */
void free_listint(listint_t *head)
{
	 listint_t *tmp;
	 listint_t *next;
	tmp = head;
	while (tmp != NULL)
	{
		next = tmp->next;
		free(tmp);
		tmp = next;
	}
}
