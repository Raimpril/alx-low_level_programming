#include "main.h"

/**
 * _strpbrk - a function that searches a string for any of a set of bytes
 * @s: The string in question
 * @accept: The bytes being searched for
 * Return: If a set is matched (pointer) or null if not matched
 */

char *_strpbrk(char *s, char *accept)
{
int index;
while (*s)
{
for (index = 0; accept[index]; index++)
{
if (*s == accept[index])
return (s);
}
s++;
}
return ('\0');
}
