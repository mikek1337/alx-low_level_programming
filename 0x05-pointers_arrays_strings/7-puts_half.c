#include "main.h"

/**
 * puts_half - prints the second half of a string
 *
 * @str: string to be printed
 *
 * Return: void
 */
void puts_half(char *str)
{
	 char c;
	 int i = 0;
	 int start = 0;
	c = *(str + i);
	while (c != '\0')
	{
		i++;
		c = *(str + i);
	}
	start = (i - 1) / 2;
	start++;
	while (start < i)
	{
		_putchar(*(str + start));
		start++;
	}
	_putchar('\n');
}
