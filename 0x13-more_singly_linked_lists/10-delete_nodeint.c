#include "lists.h"
#include <stdio.h>

/**
 * delete_nodeint_at_index - Deletes the node at given index of a list
 * @head: Memory address of the linked list
 * @index: Index of the list to search
 *
 * Return: 1 on success, -1 on failure
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head;
	listint_t *previous;
	unsigned int i = 0, found = 0;


	if (*head == NULL && index > 0)
		return (-1);

	if (*head != NULL && index == 0)
	{
		*head = temp->next;
		free(temp);
		return (1);
	}
	while (temp != NULL)
	{

		if (i == index - 1)
		{
			found = 1;
			break;
		}
		previous = temp;
		temp = temp->next;
		i++;
	}

	if (!found)
		return (-1);

	previous->next = temp->next;
	free(temp);

	return (1);

}
