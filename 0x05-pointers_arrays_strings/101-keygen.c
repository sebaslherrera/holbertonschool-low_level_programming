#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Generate valid passwords
 * Return: 0 on success
 */
int main(void)
{
	int randomNumber, i, until, last;
	char randomKey[100];

	srand(time(NULL));
	randomNumber = rand() % (122 + 1 - 97) + 97;
	until = 2772 / randomNumber;
	last = 2772 - (until * randomNumber);
	for (i = 0; i < until; i++)
	{
		randomKey[i] = randomNumber;
	}
	randomKey[i] = last;
	randomKey[i + 1] = '\0';
	printf("%s", randomKey);

	return (0);
}
