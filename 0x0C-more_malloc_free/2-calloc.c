#include <stdlib.h>
#include "main.h"
/**
 * _memset - fill memory with a constant byte
 * @s: memory area to be filled
 * @b: char to copy
 * @n: number of times to copy b
 * Return: pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int y;

	for (y = 0; y < n; y++)
	{
		s[y] = b;
	}
	return (s);
}
/**
 * _calloc - allocates memory to an array
 * @nmemb: number of elements in the array
 * @size: size of each element
 * Return: pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *a;

	if (nmemb == 0 || size == 0)
		return (NULL);
	a = malloc(size * nmemb);

	if (a == NULL)

		return (NULL);
	_memset(a, 0, nmemb * size);

	return (a);
}
