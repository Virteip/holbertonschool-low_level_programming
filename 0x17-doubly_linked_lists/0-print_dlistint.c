#include "lists.h"
/**
 * print_dlistint - print singly linked list.
 * @h: pointer to list.
 * Return: int.
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		if (h->next == NULL)
		{
			printf("%d\n", h->n);
			h = h->next;
			i++;
			break;
		}
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}

	return (i);
}
