#include "lists.h"

/**
 * free_listint2 - Free the list and put NULL in the head
 * @head: Head of the list
 *
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;
	listint_t *t;

	t = *head;
	while (t != NULL)
	{
		temp = t;
		t = t->next;
		free(temp);
	}

	*head = NULL;
}
