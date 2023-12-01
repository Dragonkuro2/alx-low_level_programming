#include "hash_tables.h"

/**
 * key_index - this function gives you the index of a key.
 * @key: the key.
 * @size: the size of the array of the hash table.
 * Return: the index which the key pair should be stored in the array.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
