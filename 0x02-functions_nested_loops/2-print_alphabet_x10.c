#include "main.h"

/**
 * print_alphabet10x - Prints a - z 10 times
 *
 * Return: Void always (Success)
 */
void print_alphabet_x10(void)
{
	 int i;
	 char c;
	for (i = 0; i < 9; i++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}
