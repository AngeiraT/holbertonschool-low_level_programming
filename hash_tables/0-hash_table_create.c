#include "hash_tables.h"

/**
 * hash_table_create - Creates a hash table
 * @size: The size of the array in the hash table
 * Return:  pointer to the hash table that was created.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
    hash_table_t *ht;
	unsigned long int idx;

	ht = malloc(sizeof(hash_table_t));
	if (ht == NULL || size == 0)
		return (NULL);
	ht->size = size;
	ht->array = malloc(sizeof(hash_node_t *) * size);

	if (ht->array == NULL)
		free(ht);
	return (NULL);

	for (idx = 0; idx < size; idx++) /*Initializes array slots to NULL*/
		ht->array[idx] = NULL;

	return (ht);
}