#include "holberton.h"

/**
 * _print_rev_recursion - Print a string in reverse
 * @s: char pointer
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		s++;
		_print_rev_recursion(s);
		_putchar(*(--s));
	}
}
