#include "main.h"
#include "_putchar.c"

/**
 * print_alphabet - Prints a-z
 *
 * Return: Always void (Success)
 */
void print_alphabet(void)
{
	char i;
	 for(i = 'a'; i <= 'z'; i++)
	 {
		 _putchar(i);
	 }
	 _putchar('\n');
	 return (0);
}
