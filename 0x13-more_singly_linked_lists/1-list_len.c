#include <stddef.h>
#include <stdio.h>
#include "lists.h"
/**
 * print - prints lists
 * @h: the list
 * @count: number of lists
 * Return: number of count
 */
size_t print(const list_t *h, int count)
{
	if (h == NULL)
		return (count);
	h = h->next;
	count++;
	return (print(h, count));
}

/**
 * list_len - print all the elements of list_t
 * @h: the list passed
 * Return: number of nodes
 */
size_t list_len(const list_t *h)
{
	return (print(h, 0));
}
