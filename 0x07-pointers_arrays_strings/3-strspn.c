#include "holberton.h"

/**
 * _strspn - Gets the length of a prefix substring
 * @s: Char pointer
 * @accept: Char pointer
 *
 * Return: Returns the number of bytes in the initial
 * segment of s which consist
 * only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j, flag;
	unsigned int ans = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		flag = 1;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				ans++;
				flag = 0;
			}
		}
		if (flag)
			break;
	}

	return (ans);
}
