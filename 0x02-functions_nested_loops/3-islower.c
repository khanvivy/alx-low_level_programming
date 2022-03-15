#include "main.h"
/**
 * _islower - function that checks lowercase character
 * @c: single letter input
 * Returns 1 if c is a lower case and 0 otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);

	else
		return (0);
}
