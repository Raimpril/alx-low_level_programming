#include "main.h"

/**
 * _memset - a function that copies memory area by filling n bytes
 * @s: A pointer to the memory area to be filled
 * @c: The character to fill the memory area
 * @n: The number of bytes to be filled
 * Return: A pointer to the filled memory areaof s
 */

void *_memset(void *s, int c, size_t n)
{
unsigned int index;
unsigned char *memory = s, value = c;

for (index = 0; index < n; index++)
memory[index] = value;
return (memory);
}
