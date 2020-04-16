#include "search_algos.h"
#include <math.h>

size_t manual_sqrt(size_t number);

/**
 * jump_search - Jump search algorithm
 * @array: Pointer at the first element of an array of integers
 * @size: Size of the array
 * @value: Search value in the array
 * Return: Integer with the index of the searched value or -1
 */
int jump_search(int *array, size_t size, int value)
{
	size_t left, right, sqrt_size, i;

	if (array == NULL || size <= 0)
		return (-1);

	sqrt_size = sqrt(size);
	left = 0;
	right = sqrt_size;
	printf("Value checked array[%lu] = [%d]\n", left, array[left]);
	while (right < size && array[right] < value)
	{

		left = right;
		right += sqrt_size;
		printf("Value checked array[%lu] = [%d]\n", left, array[left]);
	}

	printf("Value found between indexes [%lu] and [%lu]\n", left, right);

	for (i = left; i <= right; i++)
	{
		if (i > size - 1)
			return (-1);
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
