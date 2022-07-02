#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	 int i = 97;
	 int j = 124;
	while (i < j)
	{
		if (i == 123)
		{
			i = 65;
			j = 91;
		}
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
