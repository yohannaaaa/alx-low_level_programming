#include "lists.h"
#include <string.h>
/**
 * add_node - adds a new node at the end of a list_t list.
 * @head: A pointer to the head
 * @str: string
 * Return: If the function fails - NULL.
 *         Otherwise - Address of the new element.
 */
list_t *add_node(list_t **head, const char *str)
{
	char *a;
	int l;
	list_t *newptr;

	newptr = malloc(sizeof(list_t));
	if (newptr == NULL)
		return (NULL);
	a = strdup(str);
	if (a == NULL)
	{
		free(newptr);
		return (NULL);
	}
	l = 0;
	while (str[l])
		l++;
	newptr->str = a;
	newptr->len = l;
	newptr->next = *head;
	*head = newptr;
	return (newptr);
}
