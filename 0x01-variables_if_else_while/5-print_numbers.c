#include <stdio.h>

/**
 * main - Print number of 0 to 10
 * Return: 0 Success
 */
int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		printf("%d", i);
	}

	putchar('\n');
	return (0);
}
