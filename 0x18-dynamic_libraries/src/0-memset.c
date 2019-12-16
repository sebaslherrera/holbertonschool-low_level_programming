#include "holberton.h"

/**
 * *_memset - Fills memory with a constant type
 * @s: Address of a char variable to change
 * @b: Constant char variable
 * @n: Number of changes
 *
 * Return: Address of char variable
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *ps = s;

	while (n > 0)
	{
		*ps = b;
		ps++;
		n--;
	}

	return (s);
}
