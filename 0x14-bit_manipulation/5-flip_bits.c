#include "main.h"

/**
 * flip_bits - function that returns the number of bits
 * you would need to flip to get from one number to another
 * @n: First number
 * @m: Second number
 *
 * Return: Bits needed to flip.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int U;

	for (U = 0; n || m; n >>= 1, m >>= 1)
	{
		if ((n & 1) != (m & 1))
			U++;
	}
	return (U);
}
