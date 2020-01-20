#include "hash_tables.h"

/**
 * hash_table_print - print like a dict
 * @ht:hash table to be printed
 *
 *
 * Return: print like a dict.
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *seeker;
	unsigned int i = 0;
	int queue = 1;

	putchar('{');
	for (i = 0; i < ht->size ; i++)
	{
		seeker = ht->array[i];
		for ( ; seeker != NULL; seeker = seeker->next)
		{
			if (queue == 1)
			{
				printf("'%s': '%s'",
				       seeker->key, seeker->value);
			}
			else
			{
				printf(", '%s': '%s'",
				       seeker->key, seeker->value);
			}

			queue = 127;

		}

	}
	printf("}\n");


}
