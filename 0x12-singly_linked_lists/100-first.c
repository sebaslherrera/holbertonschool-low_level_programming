#include <stdio.h>

void __attribute__((constructor)) beforeMain();

/**
 * beforeMain - Prints something before the main is executed
 */
void beforeMain(void)
{
	printf("You're beat! and yet, you must allow,");
	printf("\nI bore my house upon my back!\n");
}
