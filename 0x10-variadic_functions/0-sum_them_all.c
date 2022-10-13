#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - a function that returns the sum of all its parameters
 * @n: declared variable
 * Return: Returns an interger value
 */

int sum_them_all(const unsigned int n, ...)
{
int sum = 0;
va_list valist;
unsigned int i;

if (n == 0)
return (0);
va_start(valist, n);
for (i = 0; i < n; i++)
sum += va_arg(valist, int);
va_end(valist);
return (sum);
}

