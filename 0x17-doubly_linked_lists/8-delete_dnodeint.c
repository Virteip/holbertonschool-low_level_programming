#include "lists.h"

/**
 * delete_dnodeint_at_index - delete node at index.
 * @head: headof list.
 * @index: index to delete.
 * Return: 1 succes OR -1 fail.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *newhead = *head;
	dlistint_t *ptrcount = *head;
	dlistint_t *nnhead;
	dlistint_t *hattrick;
	unsigned int i = 0;

	if (*head && head)
	{
		while (ptrcount)
		{
			ptrcount = ptrcount->next, i++;
		}
		if (index > (i - 1))
		{
			return (-1);
		}

		if (index == 0)
		{
			newhead = newhead->next;
			free(*head);
			*head = newhead;
			if (*head != NULL)
				(*head)->prev = NULL;
			return (1); }
		for (i = 0; i < index; i++)
		{
			nnhead = newhead;
			newhead = newhead->next; }
		nnhead->next = newhead->next;
		hattrick = newhead->next;
		if (hattrick)
			hattrick->prev = nnhead;
		free(newhead);
		return (1); }
	return (-1); }
