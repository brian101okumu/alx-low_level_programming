#include "main.h"
#include <stdlib.h>
/**
 * _strdup - duplicates string
 * @str: the string
 * Return: the duplicated string
 */
char *_strdup(char *str)
{
	int y = 0, w = 1;
	char *a;

	if (str == NULL)
		return (NULL);
	while (str[w])
	{
		w++;
	}

	a = malloc((sizeof(char) * w) + 1);
	if (a == NULL)
		return (NULL);
	while (y < w)
	{
		a[y] = str[y];
		y++;
	}

	a[y] = '\0';
	return a;
}

