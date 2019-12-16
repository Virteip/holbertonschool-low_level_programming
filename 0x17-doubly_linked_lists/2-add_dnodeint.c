#include "lists.h"

/**
 * add_dnodeint - add node to the head of list.
 * @head: pointer to list.
 * @n: number to add.
 * Return: int.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *node = malloc(sizeof(dlistint_t));

	if (node)
	{
		if (n)
		{
			node->n = n;
		}
		node->prev = NULL;
		node->next = *head;
		if (*head)
			(*head)->prev = node;

	}
	else
	{
		return (NULL);
	}
	*head = node;
	return (node);
}
