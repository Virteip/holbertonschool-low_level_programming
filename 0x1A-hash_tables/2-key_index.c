#include "hash_tables.h"
/**
 * key_index - find value at index key
 * @key: key in hash table
 * @size: size of table
 * Return: value at index or NULL
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	if (key && size)
	{
		return (hash_djb2(key) % size);
	}
	else
	{
		return (0);
	}
}
