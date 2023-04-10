#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * @argc: arg count
 * @argv: arg vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int j = 0, j2 = 0;

	if (argc == 3)
	{
		j = atoi(argv[1]);
		j2 = atoi(argv[2]);
		printf("%d\n", j * j2);
	}
	return (0);
}
