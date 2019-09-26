#include "holberton.h"

/**
 * print_number - Prints an integer with only _putchar
 *
 * @n: Integer parameter
 */
void print_number(int n)
{
	int i, l, x, h, ans, consN, abs, superN;

	if (n < 0)
	{
		abs = n * -1;
		_putchar('-');
	}
	else
	{
		abs = n;
	}

	consN = abs, ans = abs, superN = abs;

	for (l = 0; superN > 0; ++l)
		superN /= 10;

	h = l - 1;

	if (n == 0)
	{
		_putchar('0');
	}
	else
	{
		for (i = 0; i < l; i++)
		{
			x = h;
			while (x)
			{
				ans = ans / 10;
				x--;
			}
			_putchar(ans % 10 + '0');
			ans = consN;
			h--;
		}
	}
}
