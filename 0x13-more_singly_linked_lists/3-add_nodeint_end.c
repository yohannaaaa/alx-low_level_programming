#include <string.h>
#include "lists.h"

/**
* add_nodeint_end - adds a new node at the end of a listint_t list.
* @head: a linked list to print
* @n: integer for the new node to contain.
* Return: the address of the new element, or NULL if it failed.
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *tmp_node; /* Creating a new node */

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL; /* Pointing it to null */

	/* if head is NULL, it is an empty list */
	if (*head == NULL)
	{
		(*head) = new;
		return (new);
	}

	tmp_node = *head;
	while (tmp_node->next)
		tmp_node = tmp_node->next;

	tmp_node->next = new;	/* Pointing head to new node */

	return (new);
}
