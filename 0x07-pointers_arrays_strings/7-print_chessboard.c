#include "holberton.h"
#include <stdio.h>

/**
 * print_chessboard - Prints a chessboard
 * @a: char pointer of two dimensions
 *
 * Return: Print a chessboard
 */
void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			printf("%c", a[i][j]);
		}
		printf("\n");
	}
}
