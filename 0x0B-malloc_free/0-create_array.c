#include "main.h"

/**
 * create_array - a function that creates an array of chars,
 * and initializes it with a specific char
 * @c: prints char value
 * @size: the size of the array to print
 * Return: Should return pointer variable
 */

char *create_array(unsigned int size, char c)
{
char *buffer;
unsigned int position;

if (size == 0)
{
return (NULL);
}

/* Checks if malloc was successful*/
buffer = (char *) malloc(size * sizeof(c));
if (buffer == 0)
{
return (NULL);
}
else
{
position = 0;
while (position < size) /* while for array*/
{
*(buffer + position) = c;
position++;
}
return (buffer);
}
}
