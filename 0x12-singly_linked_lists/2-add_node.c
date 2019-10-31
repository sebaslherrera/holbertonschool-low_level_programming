#include "lists.h"
#include <string.h>
#include <stdio.h>

/**
 * add_node - Adds a new node at the beginning of a
 * linked list
 * @head: Pointer to the element of actual element of
 * the linked list
 * @str: Data string
 *
 * Return: The address of the new element, or NULL
 * if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *temp;
	unsigned int i;

	temp = (list_t *) malloc(sizeof(list_t));

	if (temp == NULL)
		return (NULL);

	temp->str = strdup(str);
	for (i = 0; str[i] != '\0'; i++)

	temp->len = i + 1;

	if (*head == NULL)
	{
		temp->next = NULL;
		*head = temp;
	}
	else
	{
		temp->next = *head;
		*head = temp;
	}

	return (temp);
}
