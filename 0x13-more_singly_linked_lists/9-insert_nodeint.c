#include <stdio.h>
#include <string.h>
#include "lists.h"
/**
* insert_nodeint_at_index - inserts new node at the nth node to listint_t list.
* @head: a linked list to print
* @idx: the index where new node added.
* @n: The integer for the new node to contain.
* Return: the nth node, NULL otherwise.
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *new, *tmp_node;

	if (head == NULL && idx != 0)
		return (NULL);

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	tmp_node = *head;
	for (i = 0; i < (idx - 1); i++)
	{
		tmp_node = tmp_node->next;
		if (tmp_node == NULL)
			return (NULL);
	}

	new->next = tmp_node->next;
	tmp_node->next = new;
return (new);
}
