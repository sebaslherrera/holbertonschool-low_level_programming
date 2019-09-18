#include <stdio.h>
#include <string.h>

/**
 * main - Print size of several data types
 *
 * Return: 0 Succesful
 */
int main(void)
{
	int integerVar;
	float floatVar;
	char charVar;
	long int longIntegerVar;
	long long int longLongIntegerVar;

	printf("Size of a char: %ld byte(s)\n", sizeof(charVar));
	printf("Size of an int: %ld byte(s)\n", sizeof(integerVar));
	printf("Size of a long int: %ld byte(s)\n", sizeof(longIntegerVar));
	printf("Size of a long long int: %ld byte(s)\n", sizeof(longLongIntegerVar));
	printf("Size of a float: %ld byte(s)\n", sizeof(floatVar));

	return (0);
}
