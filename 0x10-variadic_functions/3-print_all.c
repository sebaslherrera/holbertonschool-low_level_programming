#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void print_char(va_list args, char *separator);
void print_integer(va_list args, char *separator);
void print_float(va_list args, char *separator);
void print_string(va_list args, char *separator);

/**
 * print_all - Print all of data passed
 * @format: String constant with identifiers of data types
 *
 * Return: nothing
 */
void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i = 0, j = 0;
	char *sep = "";
	td types[] = {
		{'c', print_char},
		{'i', print_integer},
		{'f', print_float},
		{'s', print_string}
	};

	va_start(args, format);

	while (format[i] != '\0')
	{
		j = 0;
		while (j < 4)
		{
			if (format[i] == types[j].type)
			{
				types[j].data_print(args, sep);
				sep = ", ";
			}
			j++;
		}
		i++;
	}
	va_end(args);
	printf("\n");
}



/**
 * print_char - Prints a char value
 * @args: Argument passed
 * @separator: separator of data for better visualization
 *
 * Return: nothing
 */
void print_char(va_list args, char *separator)
{
	printf("%s", separator);
	printf("%c", va_arg(args, int));
}

/**
 * print_integer - Prints an integer value
 * @args: Argument passed
 * @separator: separator of data for better visualization
 *
 * Return: nothing
 */
void print_integer(va_list args, char *separator)
{
	printf("%s", separator);
	printf("%d", va_arg(args, int));
}

/**
 * print_float - Prints a float value
 * @args: Argument passed
 * @separator: separator of data for better visualization
 *
 * Return: nothing
 */
void print_float(va_list args, char *separator)
{
	printf("%s", separator);
	printf("%f", va_arg(args, double));
}

/**
 * print_string - Prints a string value
 * @args: Argument passed
 * @separator: separator of data for better visualization
 *
 * Return: nothing
 */
void print_string(va_list args, char *separator)
{
	printf("%s", separator);
	printf("%s", va_arg(args, char *));
}
