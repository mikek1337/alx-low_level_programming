#include "main.h"


/**
 * prime_number - checks if the number is divisible
 * @n: number
 * @r: half the number
 * Return: integer
 */
int prime_number(int n, int r)
{
	if (r >= n && n > 1)
	{
		return (1);
	}
	else if (n % r == 0 || n <= 1)
	{
		return (0);
	}
	else
	{
		return (prime_number(n, r + 1));
	}
}


/**
 * is_prime_number - determines if a number is prime or not
 * @n: the number to be evaluated
 * Return: integer
 */
int is_prime_number(int n)
{
	return (prime_number(n, 2));
}
