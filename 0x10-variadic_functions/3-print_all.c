#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>




/**
 * print_all - Print all of data passed
 * @format: String constant with identifiers of data types
 *
 * Return: nothing
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0;
	char *sep = "";

	va_start(args, format);

	while (format[i] != '\0')
	{
		switch (format[i])
		{
			case 'c':
				printf("%s", sep);
				printf("%c", va_arg(args, int));
				sep = ", ";
				break;
			case 'i':
				printf("%s", sep);
				printf("%d", va_arg(args, int));
				sep = ", ";
				break;
			case 'f':
				printf("%s", sep);
				printf("%f", va_arg(args, double));
				sep = ", ";
				break;
			case 's':
				printf("%s", sep);
				printf("%s", va_arg(args, char *));
				sep = ", ";
				break;
		}
		i++;
	}
	va_end(args);
	printf("\n");
}
