#include "holberton.h"
#include <stdio.h>

int isNumericChar(char x)
{
	if (x >= '0' && x <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

/**
 * _atoi - Convert a string to an integer
 *
 * @s: Pointer of a char[] variable
 * Return: Integer value
 */
int _atoi(char *s)
{
	if (*s == '\0')
		return (0);

	int ans = 0, i = 0, sign = 1;

	if (s[0] == '-')
	{
		sign = -1;
		i++;
	}

	for (; s[i] != '\0'; i++)
	{
		if (isNumericChar(s[i]))
			ans = ans * 10 + s[i] - '0';
	}

	return (ans * sign);
}

