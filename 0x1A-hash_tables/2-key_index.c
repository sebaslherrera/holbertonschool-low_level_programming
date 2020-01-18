#include "hash_tables.h"

/**
 * key_index - Function that give you the index of a key
 * @key: Key value to be hashed
 * @size: Size of the hash table
 * Return: The index at which the key/value
 * pair should be stored in the array of the hash table
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash;

	hash = hash_djb2(key);
	/*
	* The value needs to be in 0 <= value < size
	* Because we have a table with limited spaces
	*/
	return (hash % size);
}
