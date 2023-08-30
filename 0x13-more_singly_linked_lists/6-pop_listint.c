#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
* pop_listint - adds a new node at the beginning of a singly linked list.
* @head: A pointer to the address of the
*	 head of the listint_t list.
*
* Return: the address of the new element, or NULL if it failed.
*/

int pop_listint(listint_t **head)
{
	listint_t *tmp_node; /* Creating a new node */
	int ret = 0;

	if (*head == NULL)
		return (0);

	tmp_node = *head;
	*head = tmp_node->next;
	ret = tmp_node->n;
	free(tmp_node);

	return (ret);
}
