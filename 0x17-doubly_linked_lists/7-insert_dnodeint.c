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
	dlistint_t *new = NULL;
	dlistint_t *head = *h;
	unsigned int i = 1;

	if (h == NULL || (head == NULL && idx > 0))
		return (NULL);
	if (idx == 0)
		return (add_dnodeint(h, n));

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	head = head->next;
	while (head != NULL)
	{
		if (i == idx)
		{
			new->next = head;
			new->prev = head->prev;
			head->prev->next = new;
			head->prev = new;
			return (new);
		}
		i++;
		head = head->next;
	}
	free(new);
	if (i == idx)
		return (add_dnodeint_end(h, n));
	return (NULL);
}
