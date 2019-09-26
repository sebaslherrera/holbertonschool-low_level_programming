#include "holberton.h"

/**
 * _isdigit - Checks for a digit through 0 to 9
 *
 * @c: Integer parameter
 * Return: 1 is digit and 0 otherwise
 */
int _isdigit(int c)
{
	if (c > 47 && c < 58)
		return (1);
	else
		return (0);
}
