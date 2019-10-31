#include "lists.h"
#include <string.h>
#include <stdio.h>

/**
 * add_node_end - adds a new node at the end of a linked list
 * @head: Pointer of the actual element of the linked list
 * @str: Data of type array of chars
 *
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp;
	unsigned int i;

	temp = (list_t *) malloc(sizeof(list_t));

	if (temp == NULL)
		return (NULL);

	temp->str = strdup(str);
	for (i = 0; str[i] != '\0'; i++)

	temp->len = i + 1;
	temp->next = NULL;

	if (*head == NULL)
	{
		*head = temp;
	}
	else
	{
		list_t *d;

		d = *head;
		while (d->next != NULL)
			d = d->next;
		d->next = temp;
	}
	return (temp);
}
