#include "main.h"

/**
 * *_strncat - concatenates two strings but adds inputted no of bytes
 * @dest: String to be appended upon
 * @src: String to be completed at the end of dest
 * @n: integer parameter to be compared against
 * Return: Shuld return newly concateneted string
 */
char *_strncat(char *dest, char *src, int n)
{
int index = 0, dest_len = 0;

while (dest[index++])
dest_len++;

for (index = 0; src[index] && index < n; index++)
dest[dest_len++] = src[index];
return (dest);
}
