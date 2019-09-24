#include "holberton.h"

/**
 * main - Writes the string Holberton to stdout
 *
 * Return: On success 0
 */
int main(void)
{
	char c[] = "Holberton";
	int i;

	for (i = 0; i < 9; i++)
		_putchar(c[i]);
	_putchar('\n');

	return (0);
}
