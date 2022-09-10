#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/**
*main - Entry point for variables 
*
*Return: Always return 0 (Success)
*/
int main(void)
{
srand(time(0));
n = rand() - RAND_MAX / 2;
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
