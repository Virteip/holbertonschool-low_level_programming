#include "lists.h"
/**
 * listint_len - print list length.
 * @h: integer passed through by main.
 * Return: int
 */
size_t listint_len(const listint_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}

	return (i);
}
