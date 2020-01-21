#include "lists.h"
/**
 * delete_nodeint_at_index - Delete a node at a given index
 *
 * @head: head
 * @index: where to delete
 *
 *
 * Return: 1 if OK, -1 if else
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *actual, *anterior;
	unsigned long int f;

	actual = *head;
	if (head == NULL || *head == NULL)
	{
		return (-1); }
	else if (index == 0)
	{
		*head = actual->next;
		free(actual);
		return (1); }

	for (f = 0; f != index; )
	{
		anterior = actual;
		actual = actual->next;
		f++;
		if (actual == NULL)
		{
			return (-1); } }
	anterior->next = actual->next;
	free(actual);
	return (1); }
