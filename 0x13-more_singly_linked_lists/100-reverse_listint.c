#include <stdlib.h>
#include "lists.h"
/**
 * reverse_listint - reverses a listint_t list
 * @head: pointer to the address of the head in the linked list
 * Return: pointer to the first node in the new list, fail otherwise
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *curr_l_h = NULL;
	listint_t *rev_l_h = NULL;

	while (*head)
	{
		curr_l_h = (*head)->next;
		(*head)->next = rev_l_h;
		rev_l_h = *head;
		*head = curr_l_h;
	}
	*head = rev_l_h;
	return (*head);
}
