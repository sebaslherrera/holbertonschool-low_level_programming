#include "holberton.h"
#include <stdio.h>

/**
 * *_strpbrk - Searches a string for any of set of bytes
 * @s: Char pointer
 * @accept: Char pointer
 *
 * Return: Locates the first ocurrence in the string s
 * of any of the bytes in the  string accept.
 */
char *_strpbrk(char *s, char *accept)
{
	int j, flag = 0;

	while (*s != '\0')
	{
		flag = 0;
		for (j = 0; accept[j] != '\0';  j++)
		{
			if (*s == accept[j])
			{
				flag = 1;
				break;
			}
		}
		if (flag)
			break;
		s++;
	}

	if (flag)
		return (s);
	else
		return (0);
}
