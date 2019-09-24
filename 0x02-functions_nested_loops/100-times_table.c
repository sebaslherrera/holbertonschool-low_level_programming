#include "holberton.h"

/**
 * print_times_table- Print the tables from 0 to n
 * @n: Integer parameter
 */
void print_times_table(int n)
{
	int i, j;

	if (n < 15 && n >= 0)
	{
		for (i = 0; i <= n; i++)
		{
			_putchar('0');
			for (j = 1; j <= n; j++)
			{
				if ((i * j) <= 9)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(j * i + '0');
				}
				else if ((i * j) < 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(i * j / 10 + '0');
					_putchar(i * j % 10 + '0');
				}
				else
				{
					_putchar(',');
					_putchar(' ');
					_putchar((((i * j) / 10) / 10) + '0');
					_putchar((((i * j) / 10) % 10) + '0');
					_putchar((i * j) % 10 + '0');
				}
			}
			_putchar('\n');
		}
	}
}
