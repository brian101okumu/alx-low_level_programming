#include "main.h"
/**
 * _sqrt_recursion - returns the natural sq root of a number
 * @n: the number
 * Return: int sq root
 */

int r_sqrt_recursion(int n, int i);

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (r_sqrt_recursion(n, 0));
}

/**
 * r_sqrt_recursion - recursive to find the natural sq root
 * of a number
 * @n: the number
 * @i: iterator
 * Return: the square root
 */
int r_sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (r_sqrt_recursion(n, i + 1));
}
