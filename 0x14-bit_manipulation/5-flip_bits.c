#include "main.h"
/**
 * flip_bits - Counts the number of bits needed to be
 *  flipped to get from one number to another.
 * @n: 1st number
 * @m: The number to flip n to.
 * Return: The necessary number of bits to flip to get from n to m.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int num_flips = 0;

	while (n)
	{
		if ((n & 1) != (m & 1))
			num_flips++;
		n = n >> 1;
		m = m >> 1;
	}
return (num_flips);
}
