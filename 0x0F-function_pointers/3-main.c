#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * @argc: argument count
 * @argv: argument variables
 * Return: 0 always
 */
int main(int argc, char **argv)
{
	char *op = argv[2];

	if (argc < 4)
		exit(98);
	if ((*op == '/' || *op == '%') && argv[3] == 0)
		exit(100);
	if (*op != '+' || *op != '-' || *op != '*' || *op != '/' || *op != '%')
		exit(99);

	printf("%d\n", get_op_func(op)(atoi(argv[1]),atoi(argv[3])));
	return (0);
}
