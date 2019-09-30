#include "holberton.h"

/**
 * rev_string - Reverse a string in the same memory location
 *
 * @s: Pointer of char variable
 */
void rev_string(char *s)
{
	char *t, *copy;
	int counter = 0;
	int i, j = 0;

	for (t = s; *t != '\0'; t++){
		copy[counter] = s[counter];
		counter++;
	}
	
	for (i = counter - 1; i >= 0; i--)
	{
		s[j] =  copy[i];
		j++;
	}
}
