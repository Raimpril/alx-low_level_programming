#include <stdio.h>
#include "main.h"

/**
 * _isupper - checks if character is in uppercase
 * @c: checks input of function
 * Return: Return 1 if 'c' is uppercase
 * otherwise always 0 (Success)
 */

int _isupper(int c)
{
if (c >= 65 && c <= 90)
return (1);
return (0);
}
