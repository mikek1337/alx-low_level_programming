#include<stdlib.h>
#include "lists.h"
/**
 * dlistint_len - returns the length of the list
 * @h: head of the list
 * Return: length of the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	 int count = 0;
	 const dlistint_t *temp = h;
	while (temp != NULL)
	{
		temp = temp->next;
		count++;
	}
	return (count);
}
