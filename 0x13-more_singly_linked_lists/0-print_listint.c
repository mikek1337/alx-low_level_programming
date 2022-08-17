#include <stddef.h>
#include <stdio.h>
#include "lists.h"
/**
 * print - prints lists
 * @h: the list
 * @count: number of lists
 * Return: number of count
 */
size_t print(const listint_t *h, int count)
{
	 int s;
	if (h == NULL)
		return (count);
	s = h->n;
	printf("%d\n", s);
	h = h->next;
	count++;
	return (print(h, count));
}

/**
 * print_listint - print all the elements of list_t
 * @h: the list passed
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	return (print(h, 0));
}
