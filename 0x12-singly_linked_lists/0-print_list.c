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
	 char *s;
	 unsigned int len = 0;
	if (h == NULL)
		return (count);
	if (h->str == NULL)
	{
		s = "(nil)";
		len = 0;
	}
	else
	{
		s = h->str;
		len = h->len;
	}
	printf("[%d] ", len);
	printf("%s\n", s);
	h = h->next;
	count++;
	return (print(h, count));
}

/**
 * print_list - print all the elements of list_t
 * @h: the list passed
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	return (print(h, 0));
}
