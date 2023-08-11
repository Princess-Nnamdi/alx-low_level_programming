#include "hash_tables.h"

/**
 * hash_table_get - Retrieve the value associated with
 *                  a key in a hash table.
 * @ht: A pointer to the hash table.
 * @key: The key to get the value of.
 *
 * Return: NULL if the key cannot be matched OR the
 * value associated with key in ht.
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *curr;
	unsigned long int index;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	if (index >= ht->size)
		return (NULL);

	curr = ht->array[index];
	while (curr && strcmp(curr->key, key) != 0)
		curr = curr->next;

	return ((curr == NULL) ? NULL : curr->value);
}
