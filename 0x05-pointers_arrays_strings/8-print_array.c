#include "main.h"
#include <stdio.h>
/**
 * print_array - prints arrays
 *
 * @a: pointer that points to an array
 *
 * @n: size of array
 */
void print_array(int *a, int n)
{
	 int i = 0;
	while (i < n)
	{
		printf("%d" , *(a + i));
		if(i != (n - 1))
			printf("%s",", ");
		i++;
	}
	printf("\n");
}
