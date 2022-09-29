#include "main.h"

/**
 * _strlen_recursion - a function that returns the length of a string
 * @s: The string used for returning
 * Return: Length of a string
 */

int _strlen_recursion(char *s)
{
int sum = 0;
if (*s != '\0')
{
sum++;
sum += _strlen_recursion(s + 1);
}
return (sum);
}
