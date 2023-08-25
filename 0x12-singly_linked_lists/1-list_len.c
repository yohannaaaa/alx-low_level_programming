#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * list_len - shows number of elements
 * @h: linked list
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	for (; h; h = h->next)
	{
		count++;
	}

	return (count);
}
