#include "holberton.h"

/**
 * _abs - Computes the absolute value of an integer
 *
 * @n: Integer parameter
 * Return: n (int)
 */
int _abs(int n)
{
	if (n < 0)
	{
		return (n * -1);
	}
	else
	{
		return (n);
	}
}
