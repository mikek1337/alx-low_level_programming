#include<stdlib.h>
#include<stddef.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - insert value on the given index
 * @head: head of the list
 * @idx: index the new node is inserted
 * @n: the value of the node
 * Return: new node address
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	 listint_t *tmp;
	 unsigned int count = 0;
	 listint_t *newnode = malloc(sizeof(listint_t));
	tmp = (*head);
	while (tmp != NULL && count != idx)
	{
		count++;
		tmp = tmp->next;
	}
	newnode->n = n;
	newnode->next = tmp->next;
	tmp->next = newnode;
	return (newnode);
}
