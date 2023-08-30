#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
* listint_len - prints all the elements of a linked list.
* @h: a linked list to print
* Return: the number of nodes in the listint_t list.
*/
size_t listint_len(const listint_t *h)
{
	size_t node = 0;

	while (h != NULL)
	{
		++node;
		h = h->next;
	}

return (node);
}
