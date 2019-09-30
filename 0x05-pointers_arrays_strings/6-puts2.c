#include "holberton.h"

/**
 * puts2 - Prints the even position of a string
 *
 * @str: Pointer of char[] variable
 */
void puts2(char *str)
{
	char *t; 
	int counter = 0;
	int i; 

	for (t = str; *t != '\0'; t++)
		counter++;
	
	for (i = 0; i < counter; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
