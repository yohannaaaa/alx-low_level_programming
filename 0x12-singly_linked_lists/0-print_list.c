#include "lists.h"
#include <stdio.h>
/**
 * print_list - Prints all elements of a list_t list.
 * @h: Pointer to the structure list_t.
 * Return: Number of nodes.
 */
size_t print_list(const list_t *h)
{
	size_t node = 0;

	for (; h; h = h->next)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		node++;
	}
	return (node);
}
