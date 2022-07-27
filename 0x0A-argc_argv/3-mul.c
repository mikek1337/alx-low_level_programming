#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: number of arguments
 * @argv: arguments
 * Return: 0 always
 */
int main(int argc, char *argv[])
{
	 int n1, n2;
	if ((argc - 1) == 0)
	{
		printf("%s\n", "Error");
		return (0);
	}
	n1 = atoi(argv[1]);
	n2 = atoi(argv[2]);
	printf("%d\n", n1 * n2);
	return (0);
}
