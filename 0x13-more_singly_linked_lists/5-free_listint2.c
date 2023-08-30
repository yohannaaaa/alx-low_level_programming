#include "lists.h"

/**
* free_listint2 - frees a listint_t list.
* @head: a linked list to print
* Description: Sets the head to to null
* Return: void.
*/
void free_listint2(listint_t **head)
{
	listint_t *tmp_node; /* Creating a temporary node */

	if (head == NULL)
		return;

	while (*head)
	{
		tmp_node = (*head)->next;
		free(*head);
		(*head) = tmp_node;
	}
	head = NULL;
}
