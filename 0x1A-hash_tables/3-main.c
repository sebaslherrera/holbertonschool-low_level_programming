#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    hash_table_t *ht;
    int i;

    ht = hash_table_create(1024);
    hash_table_set(ht, "betty", "holberton");
    hash_table_set(ht, "hetairas", "holberton");
    hash_table_set(ht, "mentioner", "holberton");
    i = hash_table_set(ht, "", "holberton");
    if (i == 0)
        printf("Good\n");
    return (EXIT_SUCCESS);
}
