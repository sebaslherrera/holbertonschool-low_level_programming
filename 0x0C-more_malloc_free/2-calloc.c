#include "holberton.h"
#include <stdlib.h>

/**
 * *_calloc - Allocates memory for an array
 * @nmemb: Number of elements to be allocated
 * @size: Size of elements
 * Return: Pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *a;

	if (nmemb == 0 || size == 0)
		return (NULL);

	a = malloc(nmemb * size);

	if (a == NULL)
		return (NULL);

	for (i = 0; i < nmemb * size; i++)
		a[i] = 0;
	return (a);
}
