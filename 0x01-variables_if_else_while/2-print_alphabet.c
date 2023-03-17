#include <stdio.h>
/**
 * main - main block start point
 * Description: Use `putchar` function to print the alphabet in lowercase.
 * Return: 0
 */
int main(void)
{
	char b = 'a';

	while (b <= 'z')
	{
		putchar(b);
		b++;
	}
	putchar('\n');

	return (0);
}
