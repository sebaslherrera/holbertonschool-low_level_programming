#include "hash_tables.h"

/**
 * hash_table_delete - a
 * @ht: a
 * Return: a
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_table_t *table = ht;
	hash_node_t *head = NULL, *temp = NULL;
	unsigned long int i;

	if (table == NULL)
		return;

	for (i = 0; i < table->size; ++i)
	{
		head = table->array[i];
		while (head != NULL)
		{
			temp = head;
			head = head->next;
			free(temp->key);
			free(temp->value);
			free(temp);
		}
	}
	free(table->array);
	free(table);
}
