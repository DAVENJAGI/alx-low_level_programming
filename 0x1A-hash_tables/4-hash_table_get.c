#include "hash_tables.h"

/**
 * *hash_table_get - A  function that retrieves a value associated with a key.
 * @ht: hash table you want to look into.
 * @Key:Key you are looking for.
 *
 * Return: value associated with the element, or NULL if key not found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	int index = hash_function(key);
	int x = ht[i].value;
	
	for (i=0; ht[i].key != NULL; i++;)
	{
	if(strcmp(ht[i].key, key) == 0)
		return (x);
	}
	return NULL;
}
