#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	 int i = 0;
	 char atof = 'a';
	while (i < 10)
	{
		putchar(i % 10 + '0');
		i++;
	}
	while (atof <= 'f')
	{
		putchar(atof);
		atof++;
	}
	putchar('\n');
	return (0);
}
