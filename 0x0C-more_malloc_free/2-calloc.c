#include <stdlib.h>
#include "main.h"
/**
 * *_memset - fills memory with a constant byte
 * @s: memory area to be filled
 * @b: to be copied
 * @n: amount to be copied
 *
 * Return: pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		s[a] = b;
	}
	return (s);
}

/**
 * *_calloc - allocates memory for an array
 * @nmemb: elements in the array
 * @size: size
 * Return: pointer to allocate memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *y;

	if (nmemb == 0 || size == 0)
		return (NULL);
	y = malloc(size * nmemb);
	if (y == NULL)
		return (NULL);
	_memset(y, 0, nmemb * size);

	return (y);
}
