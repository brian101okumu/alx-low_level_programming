#include <stdio.h>

/**
 * swap_int - swaps the values of two integers
 * @a: first integer to be swapped
 * @b: second integers to swapped
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int z = *a;

	*a = *b;

	*b = z;
}
