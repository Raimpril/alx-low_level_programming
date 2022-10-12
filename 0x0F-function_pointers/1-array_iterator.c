#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_iterator - function name for a fuction that returns void
 * @array: array passed to function
 * @size: size of the array for the function
 * @action: pointer to function
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int i;

if (!array || !action)
return;

for (i = 0; i < size; i++)
action(array[i]);
}
