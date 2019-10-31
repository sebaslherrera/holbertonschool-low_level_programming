#include "lists.h"

/**
 * list_len - Count number of elements in a list
 * @h: Data of type linked list
 *
 * Return: Size of linked list
 */
size_t list_len(const list_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}

	return (i);
}
