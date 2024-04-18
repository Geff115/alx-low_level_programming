#include "hash_tables.h"

/**
 * This function creates a new hash table.
 * @size: The size of the hash table to be created.
 * @hash_table_create: A function that creates a hash table.
 *
 * Return: A pointer to the table.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;
	hash_node_t **node_ptr;
	unsigned long int i;

	table = malloc(sizeof(hash_table_t));
	if (table == NULL)
	{
		fprintf(stderr, "Error allocating memory for new hash table\n");
		return (NULL);
	}

	node_ptr = malloc(sizeof(hash_node_t *) * size);
	if (node_ptr == NULL)
	{
		fprintf(stderr, "Error allocating memory for hash node\n");
		free(table);
		return (NULL);
	}
	table->array = node_ptr;
	table->size = size;
	for (i = 0; i < table->size; i++)
	{
		table->array[i] = NULL;
	}
	return (table);
}
