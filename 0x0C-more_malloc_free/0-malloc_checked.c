#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - Entry point
 * @b: input amount
 * Return: pointer to a new memory
 */
void *malloc_checked(unsigned int b)
{
	void *n =  malloc(b);

	if (n == NULL)
	
		exit(98);

	return (n);
}
