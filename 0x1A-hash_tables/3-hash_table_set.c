#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 * @ht: the hash table
 * @key: the key to add
 * @value: value associated with the key
 * Return: 1 on success, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx;
	hash_node_t *new_pair = NULL;

	if (!ht || !key || !value || *key == '\0')
		return (0);
	idx = key_index((const unsigned char *)key, ht->size);

	new_pair = malloc(sizeof(hash_node_t));
	if (!new_pair)
		return (0);

	new_pair->key = strdup(key);
	new_pair->value = strdup(value);
	new_pair->next = ht->array[idx];
	ht->array[idx] = new_pair;

	return (1);
}
