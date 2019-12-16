#include "holberton.h"

/**
 * *_strchr - Show if a char value is on the char pointer
 * @s: Char pointer
 * @c: Char variable
 *
 * Return: Returns a pointer to the first ocurrence of the
 * character c in the string s.
 */
char *_strchr(char *s, char c)
{
	for (; *s != '\0'; s++)
	{
		if (*s == c)
			break;
	}

	if (*s == c)
		return (s);
	else
		return ('\0');
}
