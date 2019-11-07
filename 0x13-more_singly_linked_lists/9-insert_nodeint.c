#include "lists.h"
/**
 * insert_nodeint_at_index - add int at the end
 * @head: list
 * @indx: int to print if found
 * @n: int
 * Return: int
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *node;
	listint_t *tmp;
	/*listint_t *savehead;*/
	unsigned int number;

	tmp = *head;
	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);

	if (*head == NULL)
		node = *head;
	else
	{
		node->n = n;
		number = 0;
		while (number < idx - 1)
		{
			tmp = tmp->next;
	        	number++;
		}
		node->next = tmp->next;
		tmp->next = node;
	}

	return (*head);
}
