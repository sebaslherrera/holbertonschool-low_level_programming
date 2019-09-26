#include "holberton.h"

/**
 * _isupper - Checks for uppercase character
 *
 * @c: Integer parameter
 * Return: 0 lowercase or 1 uppercase character
 */
int _isupper(int c)
{
	if (c > 64 && c < 91)
		return (1);
	else
		return (0);
}
