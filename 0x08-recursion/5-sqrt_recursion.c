#include "main.h"

/**
 * _sqrt - find the natural square root
 * @n: number to be square rooted
 * @v: int
 * Return: int
 */
int _sqrt(int n, int v)
{
	if (v * v == n)
	{
		return (v);
	}
	else if (v * v < n)
	{
		return (_sqrt(n, v + 1));
	}
	else
	{
		return (-1);
	}
}

/**
 * _sqrt_recursion - function that is called by main
 * @n: parameter
 * Return: integer
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}
