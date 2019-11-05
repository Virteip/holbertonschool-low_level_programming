#include "lists.h"

/**
 * get_nodeint_at_index - add int at the end
 * @head: list
 * @index: int to print if found
 * Return: int
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
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
