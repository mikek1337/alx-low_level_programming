#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - prints all natural number up to 98
 *
 * @n: the number to start from
 *
 * Return: Void
 */
void print_to_98(int n)
{
	 int i;
	for (i = n; i <= 98; i++)
	{
		printf("%d", i);
		if (n != 98)
		{
			printf(", ");
		}
	}
	printf("\n");
}