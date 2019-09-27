#include "holberton.h"

/**
 * print_numbers_n - Print numbers from 0 to 14
 *
 */
void print_numbers_n(void)
{
	int i = 0;

	for (i = 0; i <= 14; ++i)
	{
		if (i > 9)
		{
			_putchar(i / 10 + '0');
		}
		_putchar(i % 10 + '0');
	}
}

/**
 * more_numbers - Print numbers 0 to 14 ten times
 *
 */
void more_numbers(void)
{
	int i = 0;

	for (i = 0; i < 10; ++i)
	{
		print_numbers_n();
		_putchar('\n');
	}
}
