#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - function name declared to print
 * @f: function pointer
 * @name: name of the person
 * Return: Returns void
 */

void print_name(char *name, void (*f)(char *))
{
if (!name || !f)
return;
f(name);
}
