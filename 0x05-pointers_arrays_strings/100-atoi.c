#include "holberton.h"
#include <stdio.h>

/**
 * _atoi - Convert a string to an integer
 *
 * @s: Pointer of a char[] variable
 * Return: Integer value 
 */
int _atoi(char *s)
{
	int ans = 0, i;

	for (i = 0; s[i] != '\0'; i++)
	{
		ans = ans * 10 + s[i] - '0';
	}

	return ans;
}

