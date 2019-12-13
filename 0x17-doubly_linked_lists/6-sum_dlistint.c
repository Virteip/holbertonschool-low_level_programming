#include "lists.h"
/**
 * sum_dlistint - print list elements.
 * @head: integer passed through by main.
 * Return: int
 */
int sum_dlistint(dlistint_t *head)
{
	int n;
	dlistint_t *tmp;

	tmp = head;

	n = 0;
	while (tmp != NULL)
	{
		n += tmp->n;
		tmp = tmp->next;

	}

	return (n);
}
