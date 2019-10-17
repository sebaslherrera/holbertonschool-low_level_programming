#include "holberton.h"
#include <stdlib.h>

/**
 * *malloc_checked - Allocates memory using malloc
 * @b: Bytes of memory
 * Return: Pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *a;

	a = malloc(b);

	if (a == NULL)
		exit(98);

	return (a);
}
