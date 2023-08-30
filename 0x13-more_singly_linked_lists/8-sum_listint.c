#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
* sum_listint - Calculates the the sum of all the data in a listint_t list.
* @head: A pointer to the head of the listint_t list.
* Return: the nth node, NULL otherwise.
*/

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
return (sum);
}
