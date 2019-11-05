#include "lists.h"
/**
 * pop_listint - print singly linked list.
 * @head: pointer to list.
 *
 * Return: int.
 */
int pop_listint(listint_t **head)
{
	int num;
	listint_t *met;

	if (*head == NULL)
		return (0);



	num = (*head)->n;

	if (*head != NULL)
	{
		met = *head;
		free(met);
	}


	*head = (*head)->next;



	return (num);
}
