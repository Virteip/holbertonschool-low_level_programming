#include "lists.h"

/**
 * _strlen_recursion - check the code for Holberton School students.
 *@s: reverse.
 * Return: N\a.
 */
int _strlen_recursion(const char *s)
{
	if (*s)
	{
		return (1 + _strlen_recursion(s + 1));
	}
	else
	{
		return (0);
	}
}
/**
 * add_node - print singly linked list.
 * @head: pointer to list.
 * @str: string to print.
 * Return: int.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *node = malloc(sizeof(list_t));


	node->str = strdup(str);
	node->len = _strlen_recursion(str);
	node->next = *head;
	*head = node;
	return (node);
}
