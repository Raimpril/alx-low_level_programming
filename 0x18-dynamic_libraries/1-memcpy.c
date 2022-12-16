#include "main.h"
#include <stddef.h>

/**
 * _memcpy - a function that copies memory area by filling n bytes
 * @dest: A pointer to the memory area to be filled
 * @src: The character to fill the memory area
 * @n: The number of bytes to be filled
 * Return: A pointer to the filled memory areaof s
 */

void *_memcpy(void *dest, const void *src, size_t n)
{
unsigned int index;
unsigned char *destination = dest;
const unsigned char *source = src;

for (index = 0; index < n; index++)
destination[index] = source[index];
return (dest);
}
