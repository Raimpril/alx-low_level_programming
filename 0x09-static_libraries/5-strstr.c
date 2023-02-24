#include "main.h"

/**
 * _strstr - a function that locates a substring
 * @haystack: The string to be called
 * @needle: The substring
 * Return: If the substring is called (print) or null otherwise
 */

char *_strstr(char *haystack, char *needle)
{
int index;
if (*needle == 0)
return (haystack);
while (*haystack)
{
index = 0;
if (haystack[index] == needle[index])
{
do {
if (needle[index + 1] == '\0')
return (haystack);
index++;
} while (haystack[index] == needle[index]);
}
haystack++;
}
return ('\0');
}
