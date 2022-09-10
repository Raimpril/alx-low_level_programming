#include <stdio.h>
/**
 * main - Entry point for variables
 * Return: Always return 0 (Success)
 */
int main(void)
{
char c = 'z';

while (c >= 'a')
{
	putchar(c);
	c--;
}
putchar('\n');
return (0);
}
