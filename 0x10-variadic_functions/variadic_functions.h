#ifndef VARIADIC_FUNCTION_H
#define VARIADIC_FUNCTION_H

#include <stdarg.h>

/**
 * struct typedata - Describe a specifier for a data type
 * @type: id that identifies the type of data
 * @data_print: Function that receives a data and a separator
 * Description: type and function data
 */
typedef struct typedata
{
	char type;
	void (*data_print)(va_list);
} td;


int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
