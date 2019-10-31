#include "lists.h"
/**
 * list_len - print singly linked list.
 * @h: pointer to list.
 * Return: int.
 */
size_t list_len(const list_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			h = h->next;
			i++;
		}

		h = h->next;
		i++;
	}

	return (i);
}
