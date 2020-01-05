#include "lists.h"

/**
 * insert_dnodeint_at_index - insert node at index
 * @h: head
 * @idx: index
 * @n: new number int
 * Return: list
 *
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *node;
	unsigned int bignum;
	dlistint_t *tm = *h;
	dlistint_t *txn = *h;

	node = malloc(sizeof(dlistint_t)*1);
	if (!node)
	{
		return (NULL); }
	node->n = n;
	if (idx != 0)
	{
		bignum = 0;
		while (bignum < idx - 1)
		{
			tm = tm->next;
			if (tm == NULL)
			{
				free(node);
				return (NULL);
			}
			bignum = bignum + 1;
		}
		txn = tm->next;
		node->next = txn;
		tm->next = node;
		txn->prev = node;
		node->prev = tm;
	}
	else
	{
		node->next = *h;
		*h = node;
	}
	return (node); }
