#include "hash_tables.h"

/**
* key_index - generates the index of a key
*
* @key: the key
* @size: the size of the hash table array
* Return: returns the index
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_key = hash_djb2((unsigned char *) key);
	unsigned long int key_index = hash_key % size;

	return (key_index);
}
