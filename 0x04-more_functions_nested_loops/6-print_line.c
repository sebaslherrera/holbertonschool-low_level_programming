#include "holberton.h"

/**
 * print_line - Draw a straight line in the terminal
 * @n: Integer parameter
 */
void print_line(int n)
{
	int i = 0;

	for (i = 0; i < n; ++i)
	{
		if (n == 0)
			break;
		_putchar('_');
	}
	_putchar('\n');
}
