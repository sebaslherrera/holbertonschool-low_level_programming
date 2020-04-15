#include "search_algos.h"

void print_searched(int *array, size_t left, size_t right);

/**
 * binary_search - Binary search implemented
 * @array: Pointer at the first element of an array of integers
 * @size: Size of the array
 * @value: Search value in the array
 * Return: Integer with the index of the searched value or -1
 */
int binary_search(int *array, size_t size, int value)
{
	size_t left, right, mid;

	if (array == NULL)
		return (-1);

	left = 0;
	right = size - 1;
	while (left <= right)
	{
		mid = left + (right - left) / 2;
		print_searched(array, left, right);
		if (array[mid] == value)
			return (mid);
		if (array[mid] < value)
			left = mid + 1;
		else
			right = mid - 1;
	}
	return (-1);
}

/**
 * print_searched - Print elements of given array
 * @array: Pointer at the first element of an array of integers
 * @left: Pointer to the left index
 * @right: Pointer to the right index
 */
void print_searched(int *array, size_t left, size_t right)
{
	size_t i;
	char *comma = "";

	printf("Searching in array: ");
	for (i = left; i <= right; i++)
	{
		printf("%s%d", comma, array[i]);
		comma = ", ";
	}
	printf("\n");
}
