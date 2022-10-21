#include "hash_tables.h"

/**
 * hash_table_get - returns value from the hash table
 * @ht: hash table
 * @key: key on the table
 * Return: string
 */

char *hash_table_get(hash_table_t *ht, const char *key)
{
	 unsigned int index = key_index((unsigned char *)key, ht->size);
	if (ht->array[index] == NULL)
		return (NULL);
	return (ht->array[index]->value);
}
