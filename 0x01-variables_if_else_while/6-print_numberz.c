#include <stdio.h>

/**
 * main - Entry point
 * Return: Always return 0 (success)
 */

int main(void)
{
char abc;

for (abc = 'z' ; abc >= 'a' ; abc--)
putchar(abc);
putchar('\n');
return (0);
}
