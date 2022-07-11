#include "main.h"

/**
 * _puts - prints string out
 * 
 * @str: the string that is going to be printed
 *
 * Return: void
 */
void _puts(char *str)
{
	char c = *(str + 0);
	int cnt = 0;
	while (c != '\0')
	{
		_putchar(c);
		cnt++;
		c = *(str + cnt);
	}
	_putchar('\n');
}
