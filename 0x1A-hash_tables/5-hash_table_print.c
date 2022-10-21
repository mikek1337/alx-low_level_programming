#include "hash_tables.h"

/**
 * hash_table_print - prints all the data's in the table
 * @ht: table
 */

void hash_table_print(const hash_table_t *ht)
{
	 unsigned int i;
	 hash_node_t *temp;
	 int start_comma = 0;
	if (ht == NULL)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		temp = ht->array[i];
		if (ht->array[i] != NULL)
		{
			if (start_comma == 1)
				printf(", ");
			while (temp != NULL)
			{
				printf("'%s':'%s'", temp->key, temp->value);
				temp = temp->next;
				if (temp != NULL)
					printf(", ");
			}
			start_comma = 1;
		}
	}
	printf("}\n");

}
