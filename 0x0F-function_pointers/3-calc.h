#ifndef OP_H
#define OP_H
/**
 * struct op - Struct op
 *
 * @op: the operator
 * @f: the function associated
 */
typedef struct op
{
	char *op;
	int (*f)(int a, int b);
} op_t;

int op_add(int a, int b);
int op_sub(int, int);
int op_mul(int, int);
int op_mod(int, int);
int(*get_op_func(char *s))(int, int);
#endif
