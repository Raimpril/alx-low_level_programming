#include "main.h"

/**
 * is_prime_number - returns 1 if n is a prime no
 * @n: number to be returned
 * Return: 1 if n is prime or 0 if otherwise
 */

int is_prime_number(int n)
{
int start = n / 2;
if (n <= 1)
return (0);
return (is_prime(n, start));
}

/**
 * is_prime - To check if the number is divisible
 * @n: The number to be checked
 * @start: For division
 * Return: Returns the divisible number or not
 */

int is_prime(int n, int start)
{
if (start <= 1)
return (1);
else if (n % start == 0)
return (0);
return (is_prime(n, start - 1));
}
