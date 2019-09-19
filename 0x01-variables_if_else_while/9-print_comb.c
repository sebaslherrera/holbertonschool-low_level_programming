#include <stdio.h>

/**
 * main - Print numbers 0 to 9 separated with ',' and space
 * Return: 0 Success
 */
int main(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		putchar(i);
		if (i != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');
	return (0);
}

