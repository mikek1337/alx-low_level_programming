#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: always 0 (Success)
 */
int main(void)
{
	 int i = 0;
	while (i < 10)
	{
		putchar(i % 10 + '0');
		if (i == 9)
		{
			i++;
			continue;
		}
		putchar(',');
		putchar(' ');
		i++;
	}
	putchar('\n');
	return (0);
}
