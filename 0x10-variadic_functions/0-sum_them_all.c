#include "variadic_functions.h"

/**
 * sum_them_all - Sum all of its parameters
 * @n: unsigned integers constant
 *
 * Return: The sum of all (Integer)
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list valist;
	unsigned int i;
	int ans = 0;

	if (n == 0)
		return (0);

	va_start(valist, n);

	for (i = 0; i < n; i++)
		ans += va_arg(valist, int);

	va_end(valist);

	return (ans);
}
