#include <stdio.h>
#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 * @n: number currently being tested
 * Return: Always 0
 */

int _abs(int n)
{
if (n < 0)
{
return (-n);
}
else
{
return (n);
}
return (0);
}
