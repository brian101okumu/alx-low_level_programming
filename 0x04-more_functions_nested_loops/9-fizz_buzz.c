#include <stdio.h>

/**
 * main - prints Fizz 3 Buzz 5 FizzBuzz 3 and 5
 * Return: void
 */
int main(void)
{
	int n;

	n = 1;

	for (n = 1; n <= 100; n++)
	{
		if ((n % 3 == 0) && (n % 5 == 0))
		{
			printf(" FizzBuzz");
		}
		else if (n % 3 == 0)
		{
			printf(" Fizz");
		}
		else if (n % 5 == 0)
		{
			printf(" Buzz");
		}
		else
		{
			printf(" %d", n);
		}
	}
	printf("\n");
	return (0);
}
