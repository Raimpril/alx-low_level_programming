#include "main.h"

int is_divisible(int num, int div);
int is_prime_number(int n);

/**
 * is_divisible - To check if the number is divisible
 * @num: The number to be checked
 * @div: For division
 * Return: Returns the divisible number or not
 */

int is_divisible(int num, int div)
{
if (num % div == 0)
return (0);
if (div == num / 2)
return (1);
return (is_divisible(num, div + 1));
}
