#include "main.h"
/**
 * _strlen_recursion - will return length of string
 * @s: the string
 * Return: int value
 */
int _strlen_recursion(char *s)
{
	int longit = 0;

	if (*s)
	{
		longit++;
		longit += _strlen_recursion(s + 1);
	}

	return (longit);
}
