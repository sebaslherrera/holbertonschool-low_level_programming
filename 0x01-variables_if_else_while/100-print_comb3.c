#include <stdio.h>

/**
 * main - Print different numbers from 00 to 99 separated with ',' and space
 * Return: 0 Success
 */
int main(void)
{
	int i, j;

	for (i = 48; i <= 57; i++)
	{
		for (j = 48; j <= 57; j++)
		{
			if (i != j && i < j)
			{
				putchar(i);
				putchar(j);
				if (i != 56 || j != 57)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}

	}

	putchar('\n');
	return (0);
}

