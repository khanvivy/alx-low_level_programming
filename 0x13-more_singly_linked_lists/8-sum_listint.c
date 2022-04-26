#include "lists.h"
#include <stdlib.h>
/**
 * sum_listint - sums every int of every code
 * @head: pointer to a struc
 * Return: sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
