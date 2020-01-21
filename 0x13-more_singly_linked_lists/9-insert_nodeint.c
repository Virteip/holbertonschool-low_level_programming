#include "lists.h"
/**
 * insert_nodeint_at_index - add int at the end
 * @head: list
 * @idx: int to print if found
 * @n: int
 * Return: int
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp, *copy_head;
	unsigned long int f;

	copy_head = *head;
	if (idx != 0)
	{
		for (f = 0; f < idx - 1 && copy_head != NULL; i++)
			copy_head = copy_head->next; }
	if (copy_head == NULL && idx != 0)
	{
		return (NULL); }
	temp = malloc(sizeof(listint_t));
	if (temp == NULL)
	{
		return (NULL); }
	temp->n = n;
	if (idx == 0)
	{
		temp->next = *head;
		*head = temp; }
	else if (idx != 0)
	{
		temp->next = copy_head->next;
		copy_head->next = temp; }

	return (temp); }
