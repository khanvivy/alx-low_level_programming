#include "lists.h"
#include <stdlib.h>
/**
 * pop_listint - deletes the head node and returns the head node's data
 * @head: pointer to a struc
 * Return: nothing
 */
int pop_listint(listint_t **head)
{
	int i = 0;
	listint_t *tmp;

	if (*head == NULL)
		return (0);

	tmp = *head;
	i = tmp->n;
	*head = (*head)->next;

	free(tmp);
	return (i);
}
