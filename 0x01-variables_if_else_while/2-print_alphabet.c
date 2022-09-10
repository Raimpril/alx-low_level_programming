#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - print alphabet in lower case
* Return: Always return 0 (Success)
*/
int main(void)
{
/* your code goes there */
char c = 'a';

while (c <= 'z')
{
putchar(c);
c++;
}
putchar('\n');
return (0);
}
