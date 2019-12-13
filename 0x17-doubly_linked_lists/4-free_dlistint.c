#include "lists.h"
/**
 * free_dlistint - free all nodes of a list
 * @head: input list
 *
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *met;

	while (head != NULL)
	{
		met = head;
		head = head->next;
		free(met);
	}
}
