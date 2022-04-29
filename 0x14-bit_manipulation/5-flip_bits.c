#include "main.h"
/**
 * flip_bits - function that returns the number of bits you would need to flip
 * @n: How many bit flips are needed to equal m for n
 * @m: The number to set other equal
 * Return: The number of fliped bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int t = 0;
	unsigned long int q = n ^ m;
	while (q)
	{
		t += (q & 1);
		(q >>= 1);
	}
	return (t);
}
