#include "hash_tables.h"
#include <stdio.h>

/**
 * key_index: A function that gives you the index of a key.
 * @key: oindex key.
 * @size: size of the array of the hash table.
 *
 * Return: index at which the key/value pair should be stored
 * in the array of the hash table.
 */

/*Takes in a key and size of hash table*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	/*calculates the value for the given key using modulo*/
	unsigned long int hash_value = hash_djb2(key);
	unsigned long int index = hash_value % size;
	/*Returns index found*/
	return (index);
}
