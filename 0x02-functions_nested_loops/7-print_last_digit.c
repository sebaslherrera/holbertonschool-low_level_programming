#include "holberton.h"

/**
 * print_last_digit - Print the last digit of a number *
 * @n: Integer parameter
 *
 * Return: n (int)
 */
int print_last_digit(int n)
{
	int last = n % 10;

	if (last <= 0)
		last = last * -1;
	_putchar(last + '0');
	return (last);
}
