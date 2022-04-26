#include "lists.h"
#include <stdlib.h>
/**
 * free_listint2 - Frees a list and sets head to NULL
 * @head: pointer to a struc
 * Return: Nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head == NULL)
		return;

	temp = *head;
	while (*head)
	{
		temp = *head;
		(*head) = (*head)->next;
		free(temp);
	}
	*head = NULL;
}
