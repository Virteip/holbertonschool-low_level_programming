#include "lists.h"
/**
 * sum_listint - print list elements.
 * @head: integer passed through by main.
 * Return: int
 */
int sum_listint(listint_t *head)
{
	int n;
	listint_t *tmp;

	tmp = head;

	n = 0;
	while (tmp != NULL)
	{
		n += tmp->n;
		tmp = tmp->next;

	}

	return (n);
}
