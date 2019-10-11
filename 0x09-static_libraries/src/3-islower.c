#include "holberton.h"

/**
 * _islower - Print if is lower or upper case *
 * @c: is the representation of char in ascii code
 *
 * Return: 1 lowercase and 0 to lowercase
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
