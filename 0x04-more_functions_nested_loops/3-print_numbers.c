#include <stdio.h>
#include "main.h"

/**
 * print_numbers - a function that prints the numbers from 0 to 9
 * Return: Always return 0
 */

void print_numbers(void)
{
int c;
for (c = 48; c < 58; c++)
{
putchar(c);
}
putchar('\n');
}
