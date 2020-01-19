#include "hash_tables.h"

/**
 * hash_table_print - a
 * @ht: a
 * Return: a
 */
void hash_table_print(const hash_table_t *ht)
{
	const hash_table_t *table = ht;
	hash_node_t *head = NULL;
	unsigned long int i;
	char *del = "";

	if (table == NULL)
		return;
	printf("{");
	for (i = 0; i < table->size; ++i)
	{
		head = table->array[i];

		while (head != NULL)
		{
			printf("%s'%s': '%s'", del, head->key, head->value);
			del = ", ";
			head = head->next;
		}
	}
	printf("}\n");
}
