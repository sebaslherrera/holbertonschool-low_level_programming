#include <stdio.h>

/**
 * main - Print the first 50 fibonnaci numbers
 *
 * Return: 0 success
 */
int main(void)
{
	unsigned long x1 = 0, x2 = 1, next = 0, n = 50, ans = 0;

	while (n != 0)
	{
		next = x1 + x2;
		x1 = x2;
		x2 = next;
		if (next <= 4000000 && next % 2 == 0)
		{
			ans += next;
		}
		n--;
	}
	printf("%lu", ans);
	putchar('\n');

	return (0);
}
