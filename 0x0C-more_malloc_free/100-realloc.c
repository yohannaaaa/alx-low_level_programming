#include <stdlib.h>
#include "main.h"
/**
 * *_realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to the memory previously allocated
 * @old_size: size for ptr
 * @new_size: new size
 * Return: pointer to the newly allocated memory block
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p1;
	char *o_p;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}
	if (!ptr)
		return (malloc(new_size));
	p1 = malloc(new_size);
	if (!p1)
		return (NULL);

	o_p = ptr;

	if (new_size > old_size)
	{
		for (i = 0; i < old_size; i++)
			p1[i] = o_p[i];
	}
	free(ptr);
	return (p1);
}
