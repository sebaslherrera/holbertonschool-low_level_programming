#include "holberton.h"
#include <stdio.h>

/**
 * set_string - Setting the value of a pointer to a char
 * @s: char pointer
 * @to: integer parameter
 */
void set_string(char **s, char *to)
{
	*s = to;
}
