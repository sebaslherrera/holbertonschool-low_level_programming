#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Generate valid passwords
 * Return: 0 on success
 */
int main(void)
{
	int i, until, last, sum = 0;
	char randomKey[100];
	char generator[] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnop";

	srand(time(NULL));
	i = 0;
	until = 2772 - 112;
	last = 2772;
	while (sum < until)
	{
		randomKey[i] = generator[rand() % (sizeof(generator) - 1)];
		sum += randomKey[i];
		i++;
	}

	randomKey[i] = last - sum;
	randomKey[i + 1] = '\0';
	printf("%s", randomKey);

	return (0);
}
