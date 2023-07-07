#include "hash_tables.h"
#include <string.h>

/**
 * hash_table_set - A function that adds an element to the hash table.
 * @ht: TABLE TO BE ADDED.
 * @key: Key
 *
 * Return: 1 on success, 0 otherwise.
 */
/* A function that takes a hashtable, key and value as parameters*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	/*checks if the key is empty*/
	if (strlen(key) == 0)
	
		return (0);

	int index = hash_function(key, ht->size);
	/*creates a new node and inserts it into the bucket*/
	node_t *new_node = create_node(key, value);
	new_node->next = ht->bucket[index];
	ht->bucket[index] = new_node;

	return (1);
}

