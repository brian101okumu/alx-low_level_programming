#include "main.h"
#include <stdio.h>

/**
 * print_numbers - prints numbers between 0 to 9
 * Return: void
 */

void print_numbers(void)
{
	int d;

	for (d = 48; d < 58; d++)
	{
		putchar(d);
	}
	putchar('\n');
}
