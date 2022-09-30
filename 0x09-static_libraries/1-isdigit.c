#include <stdio.h>
#include "main.h"

/**
 * _isdigit - function that checks for a digit 0-9
 * @c: checks input of this function
 * Return: will return 1 if 'c' is the digit
 * otherwise always 0 (Success)
 */

int _isdigit(int c)
{
if (c >= 48 && c <= 57)
return (1);
return (0);
}
