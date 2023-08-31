#include "main.h"
/**
 * get_bit - Gets the value of a bit at a given index.
 * @n: the bit
 * @index: The index to get the value at - indices start at 0.
 * Return: value of a bit.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 32)
		return (-1);

	return ((n >> index) & 1);
}
