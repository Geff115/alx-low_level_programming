#include "hash_tables.h"

/**
 * key_index: This function gives the index of a key.
 * @key: A key in form of a string or an integer to get
 * its hash value.
 * @size: Size of the hashtable.
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
