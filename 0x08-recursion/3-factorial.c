#include "main.h"

/**
 * factorial - Write a function that returns the factorial of a given number
 * @n: The number in the function
 * Return: The factorial of @n
 */

int factorial(int n)
{
int new_factorial;
if (n < 0)
return (-1);
else if (n == 0)
return (1);
new_factorial = factorial(n - 1);
return (n * new_factorial);
}
