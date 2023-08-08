#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of chars, and initializes it with
 * a specific character
 * @size: size of the array
 * @c: char to assign
 * Description: create array of size and assign char c
 * Return: pointer to array, NULL if fail
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *a;

	a = malloc(sizeof(char) * size);
	if (size == 0 || a == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		a[i] = c;
	return (a);
}
