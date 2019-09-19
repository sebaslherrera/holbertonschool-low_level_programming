#include <stdio.h>

/**
 * main - Print all the alphabet lowercase without 'q' and 'e'
 * Return: 0 Success
 */
int main(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		if (i != 113 && i != 101)
			putchar(i);
	}

	putchar('\n');
	return (0);
}

