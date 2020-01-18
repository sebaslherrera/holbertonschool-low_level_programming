#include "hash_tables.h"


/**
 * hash_table_set_pair - a
 * @key: a
 * @value: a
 * Return: a
 */
hash_node_t *hash_table_set_pair(const char *key, const char *value)
{
	hash_node_t *head;

	head = malloc(sizeof(hash_node_t) * 1);
	if (head == NULL)
		return (NULL);
	head->key = strdup(key);

	if (head->key == NULL)
		return (NULL);
	head->value = strdup(value);

	if (head->value == NULL)
		return (NULL);
	head->next = NULL;
	return (head);
}

/**
 * hash_table_set - a
 * @ht: a
 * @key: a
 * @value: a
 * Return: a
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_table_t *table = ht;
	hash_node_t *head = NULL, *prev = NULL;
	unsigned long int index;

	if (table == NULL || value == NULL || key == NULL || strlen(key) == 0)
		return (0);
	index = key_index((unsigned char *)key, table->size);
	printf("table size: %lu\n", table->size);
	printf("index: %lu\n", index);
	head = table->array[index];
	/* No collision */
	if (head == NULL)
	{
		table->array[index] = hash_table_set_pair(key, value);

		if (table->array[index] == NULL)
			return (0);
		printf("key: %s, value: %s\n", table->array[index]->key, table->array[index]->value);
		return (1);
	}
	/* Collision */
	printf("collision key: %s\n", key);

	while (head != NULL)
	{
		if (strcmp(head->key, key) == 0)
		{
			/* Same key different value, means update*/
			free(head->value);
			head->value = strdup(value);
			if (head->value == NULL)
				return (0);
			return (1);
		}
		prev = head;
		head = prev->next;
	}
	prev->next = hash_table_set_pair(key, value);
	printf("key: %s, value: %s\n", table->array[index]->next->key, table->array[index]->next->value);

	return (1);
}
