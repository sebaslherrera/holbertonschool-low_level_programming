#include "holberton.h"

/**
 * print_numbers - Print numbers from 0 to 8
 *
 */
void print_numbers(void)
{
	int i = 0;

	for (i = 0; i < 10; ++i)
		_putchar(i + '0');
	_putchar('\n');
}
