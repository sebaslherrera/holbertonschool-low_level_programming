#include "holberton.h"

/**
 * print_diagonal - Draw a diagonal line on the terminal
 * @n: Integer parameter
 */
void print_diagonal(int n)
{
	int i, j, k;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; ++i)
		{
		k = i;
		for (j = 0; j < n; j++)
		{
			if (j < k)
				_putchar(' ');
		}
		_putchar(92);
		_putchar('\n');
		}

	}

}
