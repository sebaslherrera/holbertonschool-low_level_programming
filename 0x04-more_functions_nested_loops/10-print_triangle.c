#include "holberton.h"

/**
 * print_triangle - Draw a triangle on terminal
 * @size: Integer parameter
 */
void print_triangle(int size)
{
	int i, x = 1, n = size - 1, h, z;

	if (size < 1)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			h = n;
			z = x;
			while (h)
			{
				_putchar(' ');
				h--;
			}
			n--;
			while (z)
			{
				_putchar('#');
				z--;
			}
			x++;
			_putchar('\n');
		}

	}
}
