#include "lists.h"

/**
 * add_dnodeint - Add a node in the head of the list
 * @head: Memory of the Head of the linked list
 * @n: Integer data
 *
 * Return: Head of the list
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	if (*head == NULL)
	{
		new->prev = NULL;
		new->next = NULL;
		*head = new;
	}
	else
	{
		(*head)->prev = new;
		new->next = *head;
		new->prev = NULL;
		*head = new;
	}

	return (*head);
}
