#include "main.h"

/**
 * _strlen - function that returns a pointer to a newly allocated
 * space in memory which contains a copy of the string given as a parameter
 * @s: Array of elements allocated
 * Return: 1
 */

int _strlen(char *s)
{
unsigned int i;

i = 0;
while (s[i] != '\0') /* count characters in strings*/
{
i++;
}
return (i);
}

/**
 * _strcpy - a function that copies arrays
 * @src: an array to identify elements
 * @dest: dest for array
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
int i = 0;
while (src[i] != '\0')
{
dest[i] = src[i];
i++;
}
dest[i] = '\0';
return (dest);
}

/**
 * _strdup - array that prints strings
 * @str: array of elements
 * Return: Returns pointer
 */

char *_strdup(char *str)
{
char *dst;
unsigned int size;
if (str == 0)
{
return (NULL);
}
size = _strlen(str) + 1;
dst = (char *) malloc(size *sizeof(char));
if (dst == 0)
{
return (NULL);
}
_strcpy(dst, str);
return (dst);
}
