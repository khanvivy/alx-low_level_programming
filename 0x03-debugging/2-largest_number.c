#include "main.h"

/**
 * largest_number - returns the largest of 3 integers
 * @a: 1 integer
 * @b: 2 integer
 * @c: 3 integer
 *
 * Return: largest number
 *
 */
int main(void)
{
	int largest;

	if (a > b && a > c)
	{
		largest = a;
	}
	else if (b > c)
	{
		largest = b;
	}
	else
	{
		largest = c;
	}

	return (largest);
}
