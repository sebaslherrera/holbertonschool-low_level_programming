#include "holberton.h"
#include <stdlib.h>

/**
 * *array_range - Creates an array of integers
 * @min: Integer of start
 * @max: Integer of end
 * Return: Pointer of integers on success, NULL on failure
 */
int *array_range(int min, int max)
{
	int *ptr, mincp = min, i;

	if (min > max)
		return (NULL);

	ptr = malloc(sizeof(int) * (max - min + 1));

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i <= max - min; i++)
		ptr[i] = mincp++;

	return (ptr);
}
