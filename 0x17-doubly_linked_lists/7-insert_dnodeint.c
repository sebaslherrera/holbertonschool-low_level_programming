#include "lists.h"

/**
 * insert_dnodeint_at_index - Insert a new node in the given index
 * @h: Memory address of the head list
 * @idx: Index of the list
 * @n: New data (int)
 *
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new;
	dlistint_t *head = *h;
	unsigned int i = 0;

	if (head == NULL && idx > 0)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (idx == 0 && head == NULL)
	{
		new->prev = NULL;
		new->next = NULL;
		*h = new;
		return (new);
	}
	if (idx == 0 && head != NULL)
	{
		(*h)->prev = new;
		new->next = *h;
		new->prev = NULL;
		*h = new;
		return (new);
	}
	while (h != NULL)
	{
		if (i == idx - 1)
		{
			new->next = head->next;
			head->next->prev = new;
			head->next = new;
			new->prev = head;
			return (new);
		}
		i++;
		head = head->next;
	}
	free(new);
	return (NULL);
}
