#include "lists.h"

/**
 * add_dnodeint - add node to the head of list.
 * @head: pointer to list.
 * @n: number to add.
 * Return: int.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *node;
	if (head)
		node = malloc(sizeof(dlistint_t));

	if (node)
	{
		node->n = n;
		node->prev = NULL;
		node->next = *head;
	}
	*head = node;
	return (node);
}
