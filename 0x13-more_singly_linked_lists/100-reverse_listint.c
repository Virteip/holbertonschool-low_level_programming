#include "lists.h"
/**
 * reverse_listint - chage the order of a linked list.
 *
 *
 * @head: head
 *
 *
 * Return: Reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *ante = NULL;
	listint_t *prox;

	if (*head != NULL)
	{
		prox = *head;
		while (*head != NULL)
		{
			prox = prox->next;
			head[0]->next = ante;
			ante = *head;
			*head = prox; }
		*head = ante; }
	return (*head); }
