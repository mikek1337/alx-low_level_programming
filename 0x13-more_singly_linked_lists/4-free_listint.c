#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - frees list
 * @head: head of linked list
 */
void free_listint(list_t *head)
{
	 list_t *tmp;
	 list_t *next;
	tmp = head;
	while (tmp != NULL)
	{
		next = tmp->next;
		free(tmp->str);
		free(tmp);
		tmp = next;
	}
}
