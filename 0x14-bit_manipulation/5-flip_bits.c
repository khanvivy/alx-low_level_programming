#include "main.h"
/**
 * flip_bits - function set bit to 0 at given index.
 * @n: is unsigned long int
 * @m: is an unsigned int
 * Return: return 1 when bit is 1 else 0.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int nbits;

	for (nbits = 0; n || m; n >>= 1, m >>= 1)
	{
		if ((n & 1) != (m & 1))
			nbits++;
	}
	return (nbits);
}
