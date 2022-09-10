#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
*main - Entry for variables, if, else and while statement
*
*Return: Always return 0 (Success)
*/
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
if ((n % 10) > 5)
{
printf("last digit of %d is %d and greater than 5\n", n, (n % 10));
}
else if ((n % 10) == 0)
{
printf("last digit of %d is %d and equal to 5\n", n, (n % 10));
}
else
{
printf("last digit of %d is %d and less than 6\n", n, (n % 10));
}
return (0);
}
