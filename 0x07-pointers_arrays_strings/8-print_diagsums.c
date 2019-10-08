#include "holberton.h"
#include <stdio.h>

/**
 * print_diagsums - Sum of the two diagonals of a square matriz
 * @a: char pointer
 * @size: integer parameter
 */
void print_diagsums(int *a, int size)
{
	int i, j = size - 1;
	int ans1 = 0, ans2 = 0;

	for (i = 0; i < size; i++)
	{
		ans1 += *(a + i * size + i);
	}

	for (i = 0; i < size; i++)
	{
		ans2 += *(a + i * size + j);
		j--;
	}

	printf("%d, %d\n", ans1, ans2);

}
