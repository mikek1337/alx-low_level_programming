#include <stdarg.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * print_strings - prints strings with specified separators
 * @separator: the separator between strings
 * @n: number of strings
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	 unsigned int i;
	 int slen ;
	 va_list args;
	 int j;
	 char *s;
	va_start(args, n);
	if (separator == NULL)
		slen = 0;
	else
		slen = strlen(separator);
	for (i = 0; i < n; i++)
	{
		s = va_arg(args, char *);
		printf("%s", s == NULL ? "nil" : s);
		if (i == (n - 1))
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
	va_end(args);
}
