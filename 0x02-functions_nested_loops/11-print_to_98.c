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
	if (n < 98)
	{
		for (i = n; i <= 98; i++)
		{
			printf("%d", i);
			if (n != 98)
			{
				printf(", ");
			}
		}
	}
	else
	{
		for (i = 98; i >= n; i--)
		{
			printf("%d", i);
			if (n != 98)
			{
				printf(", ");
			}
		}
	}
	printf("\n");
}
