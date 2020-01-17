#include "hash_tables.h"

/**
 * hash_table_create - Creation of a hash table in the heap memory
 * @size: Size of the hash table
 * Return: a pointer of the new hash table with all the values of
 * the array initialized in NULL or in case it failed return NULL
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_table = NULL;
	unsigned long int i;

	if (size <= 0)
		return (NULL);

	new_table = malloc(sizeof(hash_table_t) * 1);
	if (new_table == NULL)
		return (NULL);

	new_table->array = malloc(sizeof(hash_node_t *) * size);
	if (new_table->array == NULL)
		return (NULL);

	for (i = 0; i < size; ++i)
		new_table->array[i] = NULL;

	new_table->size = size;
	return (new_table);
}
