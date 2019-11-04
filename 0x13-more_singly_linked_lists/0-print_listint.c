#include "lists.h"
/**
 * print_listint - print list elements.
 * @h: integer passed through by main.
 * Return: int
 */
size_t print_listint(const listint_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}

	return (i);
}
