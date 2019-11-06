#include "lists.h"

/**
 * print_listint_safe - Prints all the elements of a linked list
 * @head: Head of the linked list
 *
 * Return: Number of nodes (size_t)
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *temp = head;
	size_t i = 0;

	if (temp == NULL)
		exit(98);

	while (head != NULL)
	{
		printf("%d\n", head->n);
		head = head->next;
		i++;
	}

	return (i);
}
