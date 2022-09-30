#include <stdio.h>
#include "main.h"

/**
 * _isalpha - function to check if c is a letter
 * @c: is the int that will be used for the argument
 * Return: Always 0
 */
int _isalpha(int c)
{
if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
return (1);
else
return (0);
}
