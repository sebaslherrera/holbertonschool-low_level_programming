#include "holberton.h"

int _strlen_recursion(char *s);
int is_palindrome_mod(char *string, int start, int final);



/**
 * is_palindrome - Check if a number is palindrome
 * @s: String given
 * Return: 1 is palindrome or 0 not palindrome
 */
int is_palindrome(char *s)
{
	int start, final;

	if (s[0] == '\0')
		return (1);

	final = (_strlen_recursion(s) - 1);
	start = 0;
	return (is_palindrome_mod(s, start, final));
}


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

/**
 * is_palindrome_mod - Check if the given string is palindrome
 * @string: string given
 * @start: Integer start
 * @final: Integer position final
 * Return: 1 is palindrome or 0 not palindrome
 */
int is_palindrome_mod(char *string, int start, int final)
{
	if (string[start] != string[final])
	{
		return (0);
	}
	if (final <= start)
	{
		return (1);
	}
	return (is_palindrome_mod(string, ++start, --final));
}
