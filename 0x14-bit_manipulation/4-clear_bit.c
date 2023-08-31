#include "main.h"

/**
 * clear_bit -  sets the value of a bit at a given index to 0
 * @n: A pointer to the bit.
 * @index: The index to set the value at - indices start at 0.
 * Return: value of a bit
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 32)
		return (-1);
	*n = *n & (~(1 << index));
return (1);
}
