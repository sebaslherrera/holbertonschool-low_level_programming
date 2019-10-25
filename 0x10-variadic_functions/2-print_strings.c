#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_strings - Prints strings
 * @separator: String constant
 * @n: Number of arguments strings ...
 *
 * Return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *temp;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		temp = va_arg(args, char *);
		if (temp != NULL)
			printf("%s", temp);
		else
			printf("(nil)");
		if (i != n - 1 && separator != NULL)
			printf("%s", separator);
	}

	va_end(args);
	printf("\n");
}
