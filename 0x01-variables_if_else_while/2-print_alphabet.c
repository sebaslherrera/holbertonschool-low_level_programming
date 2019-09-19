#include <stdio.h>

/**
 * main - Print all the alphabet in lowercase
 * Return: 0 Success
 */
int main(void)
{
	char letter = 'a';

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		putchar(letter);
	}
	putchar('\n');
	return (0);
}
