#include "lists.h"
/**
 * add_nodeint - print singly linked list.
 * @head: pointer to list.
 * @n: int to print.
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
