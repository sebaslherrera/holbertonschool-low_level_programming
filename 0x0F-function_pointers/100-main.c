#include <stdlib.h>
#include <stdio.h>


/**
 * main -
 * @argc:
 * @argv:
 *
 * Return: 0 on success
 */
int main(int argc, char  **argv)
{
	int num;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	num = argv[1];

	if (num < 0)
	{
		printf("Error\n");
		exit(2);
	}


	return (0);
}

