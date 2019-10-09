#include "holberton.h"

/**
 * _strlen_recursion - Length of a string
 * @s: char pointer
 * Return: Integer variable
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
		return (1 + _strlen_recursion(++s));
	return (0);
}
