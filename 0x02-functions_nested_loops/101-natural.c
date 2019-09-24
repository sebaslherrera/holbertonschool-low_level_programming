#include <stdio.h>

/**
 * main - Print the ...
 *
 * Return: 0 success
 */
int main(void)
{
	int i, ans = 0;

	for (i = 0; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			ans += i;
		}
	}
	printf("%d\n", ans);

	return (0);
}
