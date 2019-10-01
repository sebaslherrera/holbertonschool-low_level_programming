#include "holberton.h"

/**
 * puts_half - Prints half right of a string
 *
 * @str: Pointer of char[] variable
 */
void puts_half(char *str)
{
	char *t;
	int counter = 0, middle;
	int i;

	for (t = str; *t != '\0'; t++)
		counter++;

	middle = (counter % 2 != 0) ? ((counter - 1) / 2) : counter / 2;
	for (i = middle; i < counter; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
