#include "holberton.h"
#include <stdio.h>

/**
 * print_rev - Prints a string in reverse, followed by a newline
 *
 * @str: Pointer of char variable
 */
void print_rev(char *str)
{
	char *t;
	int counter = 0;
	int i;

	for (t = str; *t != '\0'; t++)
	{
		counter++;
	}

	
	for (i = counter - 1; i >= 0; i--)
	{
		_putchar(*(str + i));
	}

	_putchar('\n');
}
