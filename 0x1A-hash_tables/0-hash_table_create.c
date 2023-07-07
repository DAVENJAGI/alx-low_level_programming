#include "hash_tables.h"

/**
 * *hash_table_create -Function that creates a hash table.
 * @size: Size of an array.
 * Return: Pointer to newly createsd hash table
 * if something went wrong, return NULL.
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	/*ALLOCATES MEMORY TO THE HASH TABLE*/
	hash_table_t *table = (hash_table_t *) malloc(sizeof(hash_table_t));
	/*CHECKS TO SEE IF MEMORY HAS BEEN ALLOCATED*/
	if (table == NULL)
		return (NULL);

	table->size = size;
	table->array = (hash_node_t **) calloc(size, sizeof(hash_node_t *));

	if (table->array == NULL)
	{
		free(table);
		return (NULL);
	}
	return (table);
}
