#include "main.h"
/**
 * print_alphabet - Prints alphabet
 * Return: void
 */
void print_alphabet(void)
{
	char b = 'a';

	while (b <= 'z')
	{
		_putchar(b);
		b++;
	}
	_putchar('\n');
}
