#include "holberton.h"

/**
 * times_table - Prints the 9 times table, starting with 0 
 *
 */
void times_table(void)
{
	int i, j;

	for(i = 0; i < 10; i++){
		for(j = 0; j < 10; j++){
			if ((i * j) <= 9){
				_putchar(j * i + '0');
				_putchar(',');
				_putchar(' ');
			}
			else {
				_putchar(',');
				_putchar(' ');
				_putchar(i * j / 10 + '0');
				_putchar(i * j % 10 + '0');
			}
		}
		_putchar('\n');
	}
}
