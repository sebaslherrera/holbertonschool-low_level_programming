#include "holberton.h"
#include <stdio.h>

/**
 * sqrt_mod - Recursive function to find a square root
 * of a given number
 * @n: Given number
 * @i: Variable counter
 * Return: Square root of a given number
 */
int sqrt_mod(int n, int i)
{
	if (i * i == n)
		return (i);
	i++;
	if (i * i < n)
		return (sqrt_mod(n, ++i));
	if (i * i > n)
		return (-1);
	return (i);
}
/**
 * _sqrt_recursion - Square root of a given number
 * @n: Integer variable
 * Return: Integer variable
 */
int _sqrt_recursion(int n)
{
	int i = 1;

	if (n == 1 || n == 0)
		return (n);

	return (sqrt_mod(n, i));
}
