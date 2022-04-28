#include "main.h"
/**
 * clear_bit - function that sets the value of a bit to 0 at a given index.
 * @n: number to set bit in
 * @index: index to set bit at
 * Return: 1 if it worked, or -1 on error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int max = 0x01;

	max = ~(max << index);
	if (max == 0x00)
		return (-1);
	*n &= max;
	return (1);
}
