#include "lists.h"
#include <string.h>
/**
 * add_node_end - adds a new node at the end of a list_t list.
 * @head: A pointer to the head
 * @str: string
 * Return: If the function fails - NULL.
 *         Otherwise - Address of the new element.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	char *a;
	int l;
	list *np, *lp;

	np = malloc(sizeof(list_t));

	if (np == NULL)
		return (NULL);
	a = strdup(str);
	if (a == NULL)
	{
		free(np);
		return (NULL);
	}
	l = 0;
	while (str[l])
		l++;
	np->str = a;
	np->len = l;
	np->next = NULL;
	if (*head == NULL)
		*head = np;
	else
	{
		lp = *head;
		while (lp->next != NULL)
			lp = lp->next;
		lp->next = np;
	}
	return (*head);
}
