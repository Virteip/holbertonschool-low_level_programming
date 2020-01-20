#include "hash_tables.h"

/**
 * hash_table_set - check the code for Holberton School students.
 * @ht: hash table
 * @key: key for table
 * @value: value for table
 *
 * Return: Always EXIT_SUCCESS.
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node = malloc(sizeof(hash_node_t));
	hash_node_t *temp;
	unsigned long int hashnum = key_index((unsigned char *)key, ht->size);

	if (key == NULL || ht == NULL || strlen(key) == 0 || value == NULL ||
	    !(new_node))
	{
		free(new_node);
		return (0);
	}

	for (temp = ht->array[hashnum]; temp; temp = temp->next)
	{
		if (strcmp(temp->key, key) == 0)
		{
			free(temp->value);
			temp->value = strdup(value);
			if (temp->value == NULL)
			{
				return (0);
			}
			return (1);
		}
	}

	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = ht->array[hashnum];
	ht->array[hashnum] = new_node;

	return (1);
}
