#include "lists.h"
/**
 * add_nodeint - print singly linked list.
 * @head: pointer to list.
 * @n: int to print.
 * Return: int.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node = malloc(sizeof(listint_t));

	if (node)
	{
		if (n)
		{
			node->n = n;
		}
		node->next = *head;
	}
	*head = node;
	return (node);
}
