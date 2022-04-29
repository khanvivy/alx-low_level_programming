#include "main.h"
/**
 * clear_bit - function that sets the value of a bit to 0 at a given index.
 * @n: number to set bit in
 * @index: index to set bit at
 * Return: 1 if it worked, or -1 on error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int m = 0;

	if (index > (sizeof(index) * 8))
		return (-1);

	m = (1 << index);
	*n = *n & ~m;
	return (1);
}
