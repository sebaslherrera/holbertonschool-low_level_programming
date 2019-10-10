#include "holberton.h"
#include <stdio.h>

int result_i(int i)
{
	return (i * i);
}

int sqrt_mod(int n, int i)
{
	if (i * i == n)
		return (i);
	i++;
	if (result_i(i) < n)
		return sqrt_mod(n, ++i);
	if (result_i(i) > n)
		return (-1);
	return i;
}
/**
 * _sqrt_recursion -
 * @n: Integer variable
 * Return: Integer variable
 */
int _sqrt_recursion(int n)
{
	int i = 1;

	if (n == 1 || n == 0)
		return n;

	return sqrt_mod(n, i);
}
