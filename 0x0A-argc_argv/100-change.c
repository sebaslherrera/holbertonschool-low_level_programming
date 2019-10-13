#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>


/**
 * main - Minimun number of coins to make change
 * @argc: size of *argv
 * @argv: array of strings
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[])
{
	int coins[5] = {25, 10, 5, 2, 1};
	int ans = 0, value = atoi(argv[1]), coin, i;

	if (argc < 1)
	{
		printf("Error\n");
		return (1);
	}

	while (value)
	{
		coin = 0;
		for (i = 0; i < 5; i++)
		{
			if (value < coins[i])
			{
				continue;
			}
			else
			{
				coin = coins[i];
				break;
			}
		}

		ans +=	value / coin;
		value %= coin;
	}

	printf("%d\n", ans);

	return (0);
}

