#include "search_algos.h"

void print_searched(int *array, size_t left, size_t right);
int recursive_binary(int *array, size_t left, size_t right, int val, int ans);

/**
 * advanced_binary - Advanced Binary search implemented
 * @array: Pointer at the first element of an array of integers
 * @size: Size of the array
 * @value: Search value in the array
 * Return: Integer with the index of the searched value or -1
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL)
		return (-1);

	return (recursive_binary(array, 0, size - 1, value, -1));
}

/**
 * recursive_binary - Binary search implemented
 * @array: Pointer at the first element of an array of integers
 * @left: Index to the left in the array
 * @right: Index in the right in the array
 * @value: Search value in the array
 * @ans: Posibble response integer
 * Return: Integer with the index of the searched value or -1
 */
int recursive_binary(int *array, size_t left, size_t right, int value, int ans)
{
	int mid;

	if (left <= right)
	{
		mid = left + (right - left) / 2;
		print_searched(array, left, right);
		if (array[mid] == value)
			ans = mid;
		if (array[mid] < value)
			return (recursive_binary(array, mid + 1, right, value, ans));
		return (recursive_binary(array, left, mid - 1, value, ans));
	}
	return (ans);
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
