#include "hash_tables.h"

/**
 * hash_table_print - Prints a hash table.
 * @ht: A pointer to the hash table to print.
 *
 * Description: Key/value pairs are printed in the order
 *              they appear in the array of the hash table.
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int index;
	hash_node_t *current;
	int first_pair = 1;

	if (ht == NULL)
		return;

	printf("{");
	for (index = 0; index < ht->size; index++)
	{
		current = ht->array[index];
		while (current != NULL)
		{
			if (!first_pair)
				printf(", ");
			printf("'%s': '%s'", current->key, current->value);
			first_pair = 0;
			current = current->next;
		}
	}
	printf("}\n");
}
