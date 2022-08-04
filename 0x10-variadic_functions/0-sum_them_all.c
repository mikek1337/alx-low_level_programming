#include <stdlib.h>
#include <stdarg.h>

/**
 * sum_them_all - sum all the parameters and return the result
 * @n: total numbers inputed
 * Return: sum of the numbers
 */
int sum_them_all(const unsigned int n, ...)
{
	 unsigned int i;
	 int sum = 0;
	 va_list arg;
	va_start(arg, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(arg, int);
	}
	return (sum);
}
