#include "hash_tables.h"

/**
 * create_new_node - A function that creates a new node and maps the
 * key to its value.
 * @key: An string to be mapped to its hash value.
 * @value: Value associated with the key.
 *
 * Return: The new node.
 */
hash_node_t *create_new_node(const char *key, const char *value)
{
	hash_node_t *new_node;

	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
	{
		fprintf(stderr, "Couldn't allocate memory for new node\n");
		return (0);
	}
	new_node->key = strdup(key);
	new_node->value = strdup(value);
	if (new_node->key == NULL || new_node->value == NULL)
	{
		if (new_node->key != NULL)
			free(new_node->key);
		if (new_node->value != NULL)
			free(new_node->value);
		free(new_node);
		return (0);
	}
	new_node->next = NULL;
	return (new_node);
}

/**
 * hash_table_set - A function that adds an element to a hash table
 * and handles collision.
 * @ht: A pointer to a hash table.
 * @key: A string to be mapped to its hash value.
 * @value: Value associated with the key.
 *
 * Return: (1) successful.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node, *temp;
	unsigned long int index;

	index = key_index((unsigned char *)key, ht->size);
	temp = ht->array[index];
	while (temp != NULL)
	{
		if (strcmp(temp->key, key) == 0)
		{
			free(temp->value);
			temp->value = strdup(value);
			return (1);
		}
		temp = temp->next;
	}
	new_node = create_new_node(key, value);
	if (new_node == 0)
		return (0);
	if (ht->array[index] != NULL)
		new_node->next = ht->array[index];
	ht->array[index] = new_node;
	return (1);
}
