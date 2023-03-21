#include "main.h"
/**
 * _islower - Checks for lowercase letters
 * C: The character to be checked
 * Return: int 1 if c is lowercase
*/
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
