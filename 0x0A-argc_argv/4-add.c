#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - entry point
 * @argc: arg count
 * @argv: vector arg
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int a;
	unsigned int y, sum = 0;
	char *q;

	if (argc > 1)
	{
		for (a = 1; a < argc; a++)
		{
			q = argv[a];
			
			for (y = 0; y < strlen(q); y++)
			{
				if (q[y] < 48 || q[y] > 57)
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(q);
			q++;
		}
		printf("%d\n", sum);
	}
	else
	{
		printf("0\n");
	}
	return (0);
}

