#include "hash_tables.h"

/**
 * key_index: This function gives the index of a key.
 *
 * Return: The index of a key.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index, hash_value;

	hash_value = hash_djb2(key);
	index = hash_value % size;
	return (index);
}
