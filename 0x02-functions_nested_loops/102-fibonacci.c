#include <stdio.h>

/**
 * main - Print the ...
 *
 * Return: 0 success
 */
int main(void)
{
	long long  x1 = 0, x2 = 1, next = 0, n = 49;

	printf("%lli, ", x2);

	while (n != 0)
	{
		next = x1 + x2;
		x1 = x2;
		x2 = next;
		printf("%lli", next);
		if (n > 1)
		{
			printf(", ");
		}
		n--;
	}
	putchar('\n');
}
