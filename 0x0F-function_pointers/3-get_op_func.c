#include "3-calc.h"
#include <stdlib.h>

/**
 * get_op_func - select's which operation to use
 * @s: the operation passed as argument
 * Return: a pointer to function corresponding 
 * to the operations
 */
int (*get_op_func(char *s))(int, int)
{	
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while(ops[i].op != NULL && *(ops[i].op) != *s)
		i++;

	return (ops[i].f);
}
