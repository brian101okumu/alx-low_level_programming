#include <stdio.h>

/**
 * _strlen - returns length of a string
 * @str: string whose lenght we want
 * Return: the lenght of @str
 */

size_t _strlen(const char *str)
{
		size_t l = 0;

		while (*str++)
		l++;
		return (l);
}
