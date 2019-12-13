#include "lists.h"

/**
 * add_dnodeint_end - add node at the end of list.
 * @head: pointer to list.
 * @n: number to add.
 * Return: int.
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *iLast;
	dlistint_t *tmp;

	tmp = *head;

	iLast = malloc(sizeof(dlistint_t));
	if (iLast == NULL)
		return (NULL);

	iLast->n = n;
	iLast->next = NULL;

	if (*head == NULL)
		*head = iLast;
	else
	{
		while (tmp->next != 0)
		{
			tmp = tmp->next;
		}
		iLast->prev = tmp;
		tmp->next = iLast;
	}

	return (*head);
}
