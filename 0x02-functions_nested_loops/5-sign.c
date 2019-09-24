#include "holberton.h"

/**
 * print_sign - Check if is a letter, lowercase or uppercase *
 * @n: is the representation of char in ascii code
 *
 * Return: 1 letter and 0 to otherwise
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
