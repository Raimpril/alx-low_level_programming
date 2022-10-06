#include "main.h"

/**
 * array_range - creates an array of integers.
 * @min: includes values of the array 1
 * @max: includes values of an array too
 * Return: should either return a pointer or not
 */

int *array_range(int min, int max)
{
int i, l;
int *b;

if (min > max)
return (NULL);
l = max - min + 1;
b = malloc(sizeof(int) * l);
if (b == NULL)
return (NULL);
for (i = 0; i < l; i++, min++)
{
b[i] = min;
}
return (b);
}
