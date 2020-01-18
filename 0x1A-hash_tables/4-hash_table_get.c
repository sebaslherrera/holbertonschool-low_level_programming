#include "hash_tables.h"

/**
 * hash_table_get - a
 * @ht: a
 * @key: a
 * Return: a
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	const hash_table_t *table = ht;
	unsigned long int index;
	hash_node_t *head = NULL;

	if (table == NULL || key == NULL)
		return (NULL);

	index = key_index((unsigned char *)key, table->size);
	head = table->array[index];
	if (head == NULL)
		return (NULL);
	while (head != NULL)
	{
		if (strcmp(head->key, key) == 0)
			return (head->value);
		head = head->next;
	}
	return (NULL);
}
