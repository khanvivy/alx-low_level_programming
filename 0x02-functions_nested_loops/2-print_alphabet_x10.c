include "main.h"
/**
 * print_alphabet_x10 - prints the alphabets 10 times in lower case
 *
 * Return: x10 a-z
 */
void print_alphabet_x10(void)
{
	int n, c;

	while (c < 10)
	{
		for (n = 'a'; n <= 'z'; n++)
		{
			_putchar(n);
		}

		c++;
		_putchar('\n');
	}

}
