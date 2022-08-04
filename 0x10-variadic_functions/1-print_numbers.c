#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * print_numbers - prints numbers with separators
 * @separator: the string used to separate the numbers
 * @n: total count of the numbers
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	 unsigned int i;
	 int j;
	 int slen = strlen(separator);
	 va_list arg;
	va_start(arg, n);
	if (separator == NULL)
		return;


	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(arg, int));
		if (i == (n-1))
		{
			printf("\n");
			return;
		}
		for (j = 0; j < slen; j++)
		{
			printf("%c", separator[j]);
		}
	}
	printf("\n");
}
