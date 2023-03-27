#include "main.h"
/**
 * rev_string - reverse a string
 * @s: the string to be reversed
 * Return: void
 */

void rev_string(char *s)
{
	int l = 0;
	int i = 0;
	char t;

	while (s[i++])
	l++;

	for (i = l - 1; i >= l / 2; i--)
	{
		t = s[i];
		s[i] = s[l - i - 1];
		s[l - i] = t;
	}
}

