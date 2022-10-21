#include "hash_tables.h"

/**
 * key_index - returns keys
 * @key: content to be hashed
 * @size: size of hash table
 * Return: key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
