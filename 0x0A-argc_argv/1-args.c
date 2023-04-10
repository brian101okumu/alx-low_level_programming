#include "main.h"
#include <stdio.h>
/**
 * main - entry point
 * @argc: arg count
 * @argv: vector of C strings
 * Return: int value
 */
int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
