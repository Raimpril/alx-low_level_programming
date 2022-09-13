#include <stdio.h>
#include "main.h"

/**
 * main - print lowercase alphabets
 * Return: Always return 0 (Success)
 */
int main(void)
{
char alpha = 'a';
while (alpha <= 'z')
{
_putchar(alpha);
alpha++;
_putchar('\n');
}
return (0);
}
