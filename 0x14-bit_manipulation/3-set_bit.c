#include "main.h"

/**
 * set_bit -  find the value of a bit at a given index.
 * @n: A pointer to the bit.
 * @index: The index to set the value at - indices start at 0.
 * Return: If an error occurs - -1.
 *	   Otherwise - 1.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 32)
		return (-1);
	*n = *n | (1 << index);

return (1);
}
