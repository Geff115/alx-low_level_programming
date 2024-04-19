#include "hash_tables.h"

/**
 * hash_table_get - This function retrieves a value
 * associated with a key.
 * @ht: A pointer to the hash table.
 * @key: A string, i.e, the key to look for.
 *
 * Return: The value associated with the element.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *node;

	index = key_index((unsigned const char *)key, ht->size);
	node = ht->array[index];
	while (node != NULL)
	{
		if (strcmp(node->key, key) == 0)
		{
			return (node->value);
		}
		node = node->next;
	}
	return (NULL);
}
