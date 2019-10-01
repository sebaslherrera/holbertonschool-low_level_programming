#include "holberton.h"

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

	unsigned int ans = 0;
	int i = 0, sign = 1;


	while ((s[i] < '0' || s[i] > '9') && s[i] != 0)
	{
		if (s[i] == '-')
			sign *= -1;
		i++;
	}
	sign *= -1;
	while ((s[i] >= '0' && s[i] <= '9') && s[i] != 0)
	{
		ans = ans * 10 - (s[i] - '0');
		i++;
	}
	return (ans * sign);
}
