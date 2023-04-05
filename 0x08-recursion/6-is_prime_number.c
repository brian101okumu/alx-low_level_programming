#include "main.h"

/**
 * is_prime_number - checks for prime number
 * @n: the number
 * @i: iterator
 * Return: 1 if n is a prime number else 0
 */

int prime_num(int n, int i);

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime_num(n, n - 1));
}

/**
 * prime_num - evaluates prime number recursively
 * @n: the number
 * @i: iterator
 * Return: 1 if n is prime number else 0
 */
int prime_num(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (prime_num(n, i - 1));
}
