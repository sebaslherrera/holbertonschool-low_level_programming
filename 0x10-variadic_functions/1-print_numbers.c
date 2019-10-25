#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - Prints numbers with a separator
 * @separator: String constant
 * @n: Number of arguments in ...
 *
 * Return: nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, int));
		if (i != n - 1 && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");
}
