#include "hash_tables.h"

/**
 * hash_table_set - adds an element to table, checks first
 * @ht: the table
 * @key: the key
 * @value: the thing to add
 * Return: 1 on success, or 0 on fail
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	/* declarations */
    hash_node_t *new = NULL;
	char *key_cp, *value_cp;
	unsigned long int index = 0;

    /* check for table, key, value */
	if ((strcmp(key, "") == 0 || key == NULL || value == NULL || ht == NULL))
		return (0);

	key_cp = strdup(key);
	value_cp = strdup(value);

	new = malloc(sizeof(hash_node_t));/* look for place to add */
	if (new == NULL)
		return (0);
	new->key = key_cp;
	new->value = value_cp;

	index = key_index((const unsigned char *)key, ht->size);

	if (ht->array[index] == NULL)
		new->next = NULL;
	else
		new->next = ht->array[index];

	ht->array[index] = new;

	return (1);
}