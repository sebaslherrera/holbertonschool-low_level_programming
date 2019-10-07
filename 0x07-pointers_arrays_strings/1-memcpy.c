#include "holberton.h"

/**
 * *_memcpy - Copies memory area from one pointer to another
 * @dest: Pointer of destiny
 * @src: Source pointer to be copied
 * @n: Bytes to be copied
 *
 * Return: Pointer dest of type char
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *psrc = src;
	char *pdest = dest;

	while (n > 0)
	{
		*pdest = *psrc;
		psrc++;
		pdest++;
		n--;
	}

	return (dest);
}

