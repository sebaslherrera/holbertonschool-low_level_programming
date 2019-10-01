#include "holberton.h"

/**
 * _strlen - Length of the string
 *
 * @s: Pointer of char variable
 * Return: Integer value
 */
int _strlen(char *s)
{
	char *t;
	int counter = 0;

	for (t = s; *t != '\0'; t++)
		counter++;

	return (counter);
}
