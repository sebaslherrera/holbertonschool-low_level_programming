#include "holberton.h"
#include <stdio.h>

/**
 * *_strstr - locate a substring
 * @haystack: char pointer
 * @needle: char pointer
 *
 * Return: The substring associated
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0, flag = 0, counter = 0;
	char *pn = needle;

	for (; *pn != '\0'; pn++)
		counter++;

	while (*haystack != '\0')
	{
		flag = 0;
		i = 0;
		if (*haystack == needle[i])
		{
			flag++;
			i++;
			haystack++;
			while (i < counter)
			{
				if (*haystack == needle[i])
				{
					flag++;
				}
				else
				{
					haystack--;
					flag = 0;
					break;
				}
				i++;
				haystack++;
			}
		}
		if (flag == counter)
			break;
		haystack++;
	}
	if (flag == counter)
		return (haystack - counter);
	else
		return (0);
}
