#include "lists.h"

/**
 * add_nodeint_end - add int at the end
 * @head: list
 * @n: int to insert
 * Return: int
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *iLast;
	listint_t *tmp;

	tmp = *head;

	iLast = malloc(sizeof(listint_t));
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
		tmp->next = iLast;
	}

	return (*head);
}
