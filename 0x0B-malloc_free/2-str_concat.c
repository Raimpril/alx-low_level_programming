#include "main.h"

/**
 * _strlen - a function that counts array
 * @s: array to be counted
 * Return: Always 1
 */

int _strlen(char *s)
{
unsigned int i;
i = 0;
while (s[i] != '\0') /* counts characters in a string*/
{
i++;
}
return (i);
}

/**
 * str_concat - concatenates a function to array
 * @s1: Firt array
 * @s2: Second array
 * Return: Always an array
 */

char *str_concat(char *s1, char *s2)
{
char *dst;
unsigned int i, j, size;

/* If the array is empty*/
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";

/*count size in total*/
size = (_strlen(s1) + _strlen(s2) + 1);

/* Malloc*/
dst = (char *) malloc(size * sizeof(char));
if (dst == 0)
{
return (NULL);
}

/* Concatenate arrays*/
for (i = 0; *(s1 + i) != '\0'; i++)
*(dst + i) = *(s1 + i);
for (j = 0; *(s2 + j) != '\0'; j++)
{
*(dst + i) = *(s2 + j);
i++;
}
return (dst);
