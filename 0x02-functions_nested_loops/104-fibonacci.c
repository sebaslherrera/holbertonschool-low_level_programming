#include <stdio.h>

/**
 * main - Prints the first 98 Fibonacci numbers with tricks.
 *
 * Return: Always 0.
 */
int main(void)
{
	int i, j;
	unsigned long fib1 = 1, fib2 = 2, fib3, fib4, fib5, fib6;

	for (i = 0; i < 90; i += 2)
	{
		printf("%lu, %lu, ", fib1, fib2);
		fib1 += fib2;
		fib2 += fib1;
	}
	printf("%lu, %lu, ", fib1, fib2);

	fib3 = fib1 / 100;
	fib4 = fib2 / 100;
	fib5 = fib1 % 100;
	fib6 = fib2 % 100;

	for (j = 0; j < 6; j++)
	{
		fib1 = fib3 + fib4;
		fib2 = fib5 + fib6;
		if (fib2 > 99)
			fib1++;
		printf("%lu", fib1);

		fib2 = fib2 % 100;
		if (fib2 < 10)
			printf("0");
		printf("%lu", fib2);
		if (j != 5)
			printf(", ");
		fib3 = fib4;
		fib4 = fib1;
		fib5 = fib6;
		fib6 = fib2;
	}
	printf("\n");
	return (0);
}
