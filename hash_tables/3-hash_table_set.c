#include "hash_tables.h"

/**
 * hash_table_set - main function
 * @ht: table
 * @key: string
 * @value: string
 * Return: 0 or 1
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = hash_djb2((unsigned char *)key) % ht->size;

	if (ht == NULL || key == NULL || *key == '\0')
	{
		return (0);
	}
	hash_node_t *new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
	{
		return (0);
	}
	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = ht->array[index];
	ht->array[index] = new_node;

	return (1);
}
