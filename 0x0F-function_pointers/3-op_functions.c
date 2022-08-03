#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - add two numbers
 * @a: first number
 * @b: second number
 * Return: sum of the number
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - substract two numbers
 * @a: first number
 * @b: second number
 * Return: the difference of the two numbers
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplys two numbers
 * @a: first number
 * @b: second number
 * Return: multiple of the two number
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides two numbers
 * @a: first number
 * @b: second number
 * Return: division of the two number
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - module of two numbers
 * @a: first number
 * @b: second number
 * Return: module of the two numbers
 */
int op_mod(int a, int b)
{
	return (a % b);
}
