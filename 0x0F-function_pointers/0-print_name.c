#include <stdio.h>
#include "main.h"
/**
 * print_name_is - function that prints a name
 * @name - name of the person
 *
 * Return: nothing
 */
void print_name_is(char *name)
{
	printf("Hello, my name is %s\n", name);
}

/**
 * main - check the code
 *
 * Return:0
 */
int main(void)
{
	printf("Viola", print_name_is);
	printf("\n");
	return (0);
}


