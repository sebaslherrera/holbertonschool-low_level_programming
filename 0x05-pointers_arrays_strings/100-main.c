#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    int n;
	n = _atoi("214748364");
	printf("%d\n", n);
	n = _atoi("0");
	printf("%d\n", n);
	n = _atoi("Suite 402");
	printf("%d\n", n);
	n = _atoi("         +      +    -    -98 Battery Street; San Francisco, CA 94111 - USA             ");
	printf("%d\n", n);
	n = _atoi("---++++ -++ Sui - te -   402 #cisfun :)");
	printf("%d\n", n);
	n = _atoi("-2147483648");
	printf("%d\n", n);
	n = atoi("-2147483648");
	printf("%d atoi\n", n);
	n = _atoi("2147483647");
	printf("%d\n", n);
	n = _atoi("2147483648");
	printf("%d\n", n);
	n = atoi("2147483648");
	printf("%d atoi\n", n);
	n = _atoi("121212121212121212");
	printf("%d\n", n);
	n = atoi("121212121212121212");
	printf("%d atoi\n", n);
	n = _atoi("1.2.3.4.5");
	printf("%d\n", n);
	n = atoi("1.2.3.4.5");
	printf("%d atoi\n", n);
	n = _atoi("-1.2.3.4.5");
	printf("%d\n", n);
	n = atoi("-1.2.3.4.5");
	printf("%d atoi\n", n);
	n = _atoi("-2147483649");
	printf("%d\n", n);
	n = atoi("-2147483649");
	printf("%d atoi\n", n);
	n = _atoi("123456789.123456789");
	printf("%d\n", n);
	n = atoi("123456789.123456789");
	printf("%d atoi\n", n);	
	
    return (0);
}
