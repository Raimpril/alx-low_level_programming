#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
*main - Entry for variables, if, else and while statement
*Return: Always return 0 (Success)
*/
int main(void)
{
int n;
int L;
char str[] = "Last digit of";

srand(time(0));
n = rand() - RAND_MAX / 2;
L = n % 10;

if (L > 5)
{
printf("%s %d is %d and is greater than 5\n", str, n, L);
}
else if (L == 0)
{
printf("%s %d and is %d is 0\n", str, n, L);
}
else if (L < 6)
{
printf("%s %d is %d and is less than 6 and not 0\n", str, n, L);
}
return (0);
}
