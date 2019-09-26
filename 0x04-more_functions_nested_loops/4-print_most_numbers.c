#include "holberton.h"

/**
 * print_most_numbers - Print numbers from 0 to 8
 *
 */
void print_most_numbers(void)
{
	int i = 0;

	for (i = 0; i < 10; ++i)
	{
		if (i != 2 && i != 4)
			_putchar(i + '0');
	}
	_putchar('\n');
}
