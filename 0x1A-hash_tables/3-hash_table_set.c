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
	 char *value_copy;
	 unsigned long int i;
	 unsigned long int index = 0;
	
	 hash_node_t *new_data = malloc(sizeof(hash_node_t *));
	if (key == NULL || *key == '\0' || value == NULL || ht == NULL)
		return (0);
	value_copy = strdup(value);
	if (value_copy == NULL)
		return (0);
	if (new_data == NULL)
	{
		free(value_copy);
		return (0);
	}
	index = key_index((unsigned char *)key, ht->size);
	
	for (i = index; ht->array[i]; i++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = value_copy;
			return (1);
		}
	}
	new_data->key = strdup(key);
	new_data->value = value_copy;
	if(new_data->key == NULL)
	{
		free(new_data);
		return (0);
	}
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

