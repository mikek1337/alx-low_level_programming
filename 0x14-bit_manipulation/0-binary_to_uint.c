#include<stdlib.h>
#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - changes binary into decimal
 * @b: the binary data
 * Return: decimal
 */
unsigned int binary_to_uint(const char *b)
{
	 unsigned int n = 0;
	 int len = 0;
	 int i = 0;
	if (b == NULL)
		return (0);
	while (b[len])
		len++;
	while (len != i)
	{
		if (b[len - i - 1] == '1')
			n += 1 << i;
		else if (b[len - i - 1] != '0')
			return (0);
		i++;
	}
	return (n);
}
