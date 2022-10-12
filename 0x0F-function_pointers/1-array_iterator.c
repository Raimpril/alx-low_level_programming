#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - function name for a fuction that returns void
 * @array: array passed to function
 * @size: size of the array for the function
 * @action: pointer to function
 * @t: variable
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int t;
if (!array || !action)
return;

for (t = 0; t < size; t++)
action(array[t]);
}
