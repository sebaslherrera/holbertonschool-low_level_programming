#include "holberton.h"

int check_is_prime_mod(int n, int i);

/**
 * is_prime_number - Check if the given number is prime
 * @n: Number to check
 * Return: 1 is prime or 0 not prime
 */
int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	int i = 2;

	return (check_is_prime_mod(n, i));
}

/**
 * check_is_prime_mod - Recursive function to check prime numbers
 * @n: Given number
 * @i: Variable counter
 * Return: 1 is prime or 0 not prime
 */
int check_is_prime_mod(int n, int i)
{
	if (n == i)
		return (1);
	else if (n % i == 0)
		return (0);

	return (check_is_prime_mod(n, i + 1));
}
