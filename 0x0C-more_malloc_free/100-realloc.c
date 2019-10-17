#include "holberton.h"
#include <stdlib.h>

/**
 * *_realloc - Reallocates memory block using malloc and free
 * @ptr: Pointer of void
 * @old_size: Bytes values
 * @new_size: Bytes values
 * Return: Pointer of void reallocated with new memory
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	char *new, *another = ptr;

	if (ptr == NULL)
	{
		new = malloc(new_size);
		if (new == NULL)
			return (NULL);
		return (new);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (new_size == old_size)
		return (ptr);

	new = malloc(new_size);
	if (new == NULL)
		return (NULL);
	for (i = 0; i < old_size; i++)
		new[i] = another[i];

	free(ptr);

	return (new);
}
