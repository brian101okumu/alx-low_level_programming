#include <stdio.h>
/**
 * main - entry point
 * Description: Print all base 10 numbers from 0-9
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		printf("%i", i);
	}
	putchar('\n');

	return (0);
}
