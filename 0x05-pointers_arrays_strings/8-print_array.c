#include "holberton.h"
#include <stdio.h>

/**
 * print_array - Print the n elements of the array a
 *
 * @a: Pointer of a[] integer variable
 * @n: Number of elements of the array
 */
void print_array(int *a, int n)
{
	int i;

	for (i =  0; i < n; i++)
	{

		printf("%d", a[i]);

		if (i < n - 1)
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

}

