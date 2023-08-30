#include <string.h>
#include "lists.h"

/**
* free_listint - frees a singly listint_t list.
* @head: a pointer to the head of the listint_t list to be freed.
* Return: void.
*/

void free_listint(listint_t *head)
{
	listint_t *tmp_node; /* Creating a temporary node */

	while (head)
	{
		tmp_node = head;
		head = head->next;
		free(tmp_node);
	}
}
