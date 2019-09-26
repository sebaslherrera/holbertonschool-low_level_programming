#include "holberton.h"

/**
 * _isupper - Checks for uppercase character
 *
 * @c: Integer parameter
 * Return: 0 lowercase or 1 uppercase character
 */
int _isupper(int c)
{
	if (c > 96 && c < 123)
		return (0);
	else
		return (1);
}
