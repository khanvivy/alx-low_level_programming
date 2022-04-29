#include "main.h"
/**
 * get_bit - function that returns the value of a bit at a given index.
 * @n: The number to get bit from
 * @index: The index where the bit get at
 * Return: The value of the bit or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > (sizeof(index) * 8))
		return (-1);
	if ((n >> index) & 1)
		return (1);
	return (0);
}
