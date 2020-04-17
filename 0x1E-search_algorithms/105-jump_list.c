#include "search_algos.h"
#include <math.h>

/**
 * jump_list - Jump search algorithm implemented on lists
 * @list: Pointer at the first element of a list
 * @size: Size of the array
 * @value: Search value in the array
 * Return: Integer with the index of the searched value or -1
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t left, sqrt_size, i;
	listint_t *head = list, *temp;

	if (head == NULL || size <= 0)
		return (NULL);

	sqrt_size = sqrt(size);
	left = 0;

	while (left < size && head->n < value)
	{
		temp = head;
		left += sqrt_size;
		i = sqrt_size;
		while (head->index < left && i--)
		{
			if (head->index >= size - 1)
				break;
			head = head->next;
		}
		printf("Value checked at index [%ld] = [%d]\n", head->index, head->n);
	}

	printf("Value found between indexes [%ld] and [%ld]\n",
		   temp->index, head->index);

	while (temp->n < value && temp->index != head->index)
	{
		printf("Value checked at index [%ld] = [%d]\n", temp->index, temp->n);
		temp = temp->next;
	}
	printf("Value checked at index [%ld] = [%d]\n", temp->index, temp->n);

	if (temp->n == value)
		return (temp);
	return (NULL);
}
