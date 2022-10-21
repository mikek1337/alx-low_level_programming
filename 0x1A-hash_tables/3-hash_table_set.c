#include "hash_tables.h"

/**
 * hash_table_set - sets element to the hash table
 * @ht: hash table
 * @key: table key
 * @value: value to be saved
 * Return: int
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{

	 unsigned long int index = 0;
	 hash_node_t *new_data = malloc(sizeof(hash_node_t *));
	if (key == NULL || *key == '\0' || *key == ' ')
		return (0);
	if (new_data == NULL)
		return (0);
	if (value == NULL)
		return (0);
	index = key_index((unsigned char *)key, ht->size);
	new_data->key = (char *)key;
	new_data->value = strdup(value);
	if (ht->array[index] != NULL)
	{
		new_data->next = ht->array[index];
	}
	else
	{
		 ht->array[index] = new_data;
	}
	return (1);
}

