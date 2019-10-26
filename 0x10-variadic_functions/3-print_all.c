#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>

void print_char(va_list args);
void print_integer(va_list args);
void print_float(va_list args);
void print_string(va_list args);

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
		{"c", print_char},
		{"i", print_integer},
		{"f", print_float},
		{"s", print_string},
		{NULL, NULL}
	};
	va_start(args, format);
	while (format[i] != '\0' && format != NULL)
	{
		j = 0;
		while (types[j].type != NULL)
		{
			if (format[i] == *(types[j].type))
			{
				printf("%s", sep);
				types[j].data_print(args);
				sep = ", ";
				break;
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
 *
 * Return: nothing
 */
void print_char(va_list args)
{
	printf("%c", va_arg(args, int));
}

/**
 * print_integer - Prints an integer value
 * @args: Argument passed
 *
 * Return: nothing
 */
void print_integer(va_list args)
{
	printf("%d", va_arg(args, int));
}

/**
 * print_float - Prints a float value
 * @args: Argument passed
 *
 * Return: nothing
 */
void print_float(va_list args)
{
	printf("%f", va_arg(args, double));
}

/**
 * print_string - Prints a string value
 * @args: Argument passed
 *
 * Return: nothing
 */
void print_string(va_list args)
{
	char *str = va_arg(args, char *);

	if (str == NULL)
		str = "(nil)";

	printf("%s", str);
}
