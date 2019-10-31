#include "lists.h"
/**
 * _strlen - this count a string
 * @str: input string
 * Return: size of string
 */

unsigned int _strlen(const char *str)
{
	unsigned int size;

	if (str == '\0')
		return (0);
	size = 0;
	while (str[size] != '\0')
	{
		size++;
	}
	return (size);
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
	node->len = _strlen(str);
	node->next = *head;

	*head = node;
	return (node);
}
