#include "main.h"

/**
 * puts2 - prints even characters
 *
 * @str: the string that is going to be printed
 *
 * Return: void
 */
void puts2(char *str)
{
	 char c;
	 int i = 0;
	c = *(str + i);
	while (c != '\0')
	{
		if (i % 2 == 0)
		{
			_putchar(c);
		}
		i++;
		c = *(str + i);
	}
	_putchar('\n');
}
