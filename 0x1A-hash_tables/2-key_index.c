#include "hash_tables.h"
/**
 * main - check the code for Holberton School students.
 *
 * Return: Always EXIT_SUCCESS.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
		return (hash_djb2(key) % size);
}