#include "main.h"

/**
 * print_rev - reverse string
 *
 * @s: string going to be reversed
 *
 * Return: Void
 */
void print_rev(char *s)
{
	char c = *(s + 0);
	int cnt = 0;
	int len = 0;
	while (c != '\0')
	{
		cnt++;
		c = *(s + cnt);
	}
	len = cnt - 1;
	while (len >= 0)
	{
		c = *(s + len);
		len--;
		_putchar(c);
	}
	_putchar('\n');
}

