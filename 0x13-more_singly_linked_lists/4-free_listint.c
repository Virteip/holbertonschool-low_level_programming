#include "lists.h"
/**
 * free_listint - free all nodes of a list
 * @head: input list
 *
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *met;

	while (head != NULL)
	{
		met = head;
		head = head->next;
		free(met);
	}
}
