#include <stdio.h>

/**
 * main - Print the largest prime factor of n
 *
 * Return: 0 Success
 */
int main(void)
{
	long n = 612852475143, x = 2;

	while (n > x)
	{
		if (n % x == 0)
		{
			n = n / x;
			x = 2;
		}
		else
		{
			x = x + 1;
		}
	}

	printf("%lu\n", x);

	return (0);
}
