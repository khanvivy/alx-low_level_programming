#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint - Adds a new node
 * @head: A pointer to list_t structure
 * @n: An integer data to put into the new node
 * Return: the address of the new element, or NULL on failure
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(new_node));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = *(head);
	*head = new_node;

	return (new_node);
}
