#include "holberton.h"

/**
 * _isalpha - Check if is a letter, lowercase or uppercase *
 * @c: is the representation of char in ascii code
 *
 * Return: 1 letter and 0 to otherwise
 */
int _isalpha(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
