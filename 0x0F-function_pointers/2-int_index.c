#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * int_index - function that searches for integer
 * @array: array of function
 * @size: number of elements in the array
 * @cmp: a pointer to the function to be used to compare values
 * Return: returns the index of the first element for which the
 * cmp function does not return 0 If no element matches, return -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
int i;
if (array && cmp)
{
for (i = 0; i < size; i++)
{
if (cmp(array[i]) != 0)
return (i);
}
}
}
