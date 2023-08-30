#include "lists.h"
#include <stdio.h>
/**
 * check_looped_listint - counts the number of unique nodes in a looped
 *			linked list
 * @head: A pointer to the head of the listint_t to check.
 * Return: if the list is not looped - 0,
 *         Otherwise - the number of unique nodes in the list.
 */

size_t check_looped_listint(const listint_t *head)
{
	const listint_t *tortoise, *hare;
	size_t node = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	tortoise = head->next;
	hare = (head->next)->next;

	while (hare) /* checking whether there is loop in the list or not*/
	{
		if (tortoise == hare)
			break;
		tortoise = tortoise->next;
		hare = (hare->next)->next;
	}

	if (tortoise == hare) /* count unique node in a looped list */
	{
		tortoise = head;
		while (tortoise != hare)
		{
			node++;
			tortoise = tortoise->next;
			hare = hare->next;
		}
		tortoise = tortoise->next;
		while (tortoise != hare)
		{
			node++;
			tortoise = tortoise->next;
		}
		return (node);
	}

return (0);
}
/**
 * print_listint_safe - Prints a listint_t list.
 * @head: A pointer to the head of the listint_t list.
 * Return: The number of nodes.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t node, index = 0;

	node = check_looped_listint(head);

	if (node == 0)
	{
		for (; head != NULL; node++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}

	else
	{
		for (index = 0; index < node; index++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
		printf("-> [%p] %d\n", (void *)head, head->n);
	}
	return (node);
}
