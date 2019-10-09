#include "holberton.h"

/**
 * _pow_recursion - Do the power of a number
 * @x: Integer variable
 * @y: Integer variable
 * Return: Integer variable
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y > 0)
		return (x * _pow_recursion(x, y - 1));
	return (1);
}
