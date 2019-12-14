#include "lists.h"

/**
 * add_dnodeint_end - Add node in the end of the list
 * @head: Memory address of the head of the list
 * @n: Integer data
 *
 * Return: Head of the list
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
	}
	else
	{
		dlistint_t *last;

		last = *head;
		while (last->next != NULL)
			last = last->next;

		last->next = new;
		new->prev = last;
	}

	return (*head);
}
