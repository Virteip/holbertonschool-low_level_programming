#include "lists.h"

/**
 * get_dnodeint_at_index - get node index
 * @head: list
 * @index: int to print if found
 * Return: pointer
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int number;

	number = 0;
	while (number != index)
	{
		if (head == NULL)
		{
			return (NULL);
		}

		head = head->next;
		number++;
	}

	return (head);
}
