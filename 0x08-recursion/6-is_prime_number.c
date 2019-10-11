#include "holberton.h"
#include <stdio.h>

/**
 * is_prime_number_mod - Recursive function to check prime numbers
 * @n: Given number
 * @i: Variable counter
 * @j: flag variable
 * Return: 1 is prime or 0 not prime
 */
int is_prime_number_mod(int n, int i, int j)
{
	if (i >= n)
		return (1);
	if (j == 1)
		return (0);

	if (n % i == 0)
		return (is_prime_number_mod(n, i, 1));
	return (is_prime_number_mod(n, i + 1, j));
}
/**
 * is_prime_number - Check if the given number is prime
 * @n: Number to check
 * Return: 1 is prime or 0 not prime
 */
int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	int i = 2, j = 0;

	return (is_prime_number_mod(n, i, j));
}
