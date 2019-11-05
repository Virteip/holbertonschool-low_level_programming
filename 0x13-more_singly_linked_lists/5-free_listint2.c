#include "lists.h"
/**
 * free_listint - free all nodes of a list
 * @head: input list
 *
 * Return: void
 */
void free_listint2(listint_t **head)
{
  if (head == NULL)
    return;

  while (*head)
    {
      *head = (*head)->next;
      free((*head));
    }
}
