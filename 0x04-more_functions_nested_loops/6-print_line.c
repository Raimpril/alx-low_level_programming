#include <stdio.h>
#include "main.h"

/**
 * print_line - function that draws a straight line in the terminal
 * @n: number of times character will be printed
 */
void print_line(int n)
{
if (n <= 0)
{
putchar('\n');
}
else
{
int i;
for (i = 1; i <= n; i++)
{
putchar('_');
}
putchar('\n');
}
}
