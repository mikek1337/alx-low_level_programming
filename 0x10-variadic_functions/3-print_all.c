#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * print_all - print the character in the format
 * @format - format of arguments
 */
void print_all(const char *format,...)
{
	va_list args;
	va_start(args, format);
	while (*format != '\0')
	{
		if (*format == 'c' || *format == 'i' || *format == 'f' || *format == 's')
			printf("%" + *format, va_arg(args, int));
		format++;
	}
}
