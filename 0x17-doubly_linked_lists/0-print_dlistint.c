#include <stdio.h>
#include<stdlib.h>
#include "lists.h"
/**
 * print_dlistint - print all elements in the doubly linked list
 * @h: head of the list
 * Return: size of the list
 */
size_t print_dlistint(const dlistint_t *h)
{
	 int count = 0;
	 dlistint_t *temp = h;
	while (temp != NULL)
	{
		printf("%d", temp->n);
		temp = temp->next;
		count++;
	}
	return (count);
}
