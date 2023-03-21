#include "main.h"
/**
 * print_alphabet_x10 - Prints alphabet 10X
 * Return: void
 */
void print_alphabet_x10(void)
{
	char b;
	int i = 0;

	while(i <= 9)
	{	
	for (b = 'a'; b <= 'z'; b++)
	{
	_putchar(b);
	}
	_putchar('\n');
	i++;
	}
}
