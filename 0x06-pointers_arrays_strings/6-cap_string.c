#include "main.h"

/**
 * _strlen - a function that capitalizes all words of a string
 * @s: String
 * Return: returns length as integer
 */

int _strlen(char *s)
{
int len = 0;
while (*(s + len) != '\0')
len++;
return (len);
}

/**
 * cap_string - function that capitalizes all words of a character
 * @str: String to capitalize
 * Return: returns the capitalized string
 */

char *cap_string(char *str)
{
int index = 0;
while (str[index])
{
while (!(str[index] >= 'a') && (str[index] <= 'z'))
index++;
if (str[index - 1] == ' ' ||
str[index - 1] == '\t' ||
str[index - 1] == '\n' ||
str[index - 1] == ',' ||
str[index - 1] == ';' ||
str[index - 1] == '.' ||
str[index - 1] == '!' ||
str[index - 1] == '?' ||
str[index - 1] == '"' ||
str[index - 1] == '(' ||
str[index - 1] == ')' ||
str[index - 1] == '{' ||
str[index - 1] == '}' ||
index == 0)
str[index] -= 32;
index++;
}
return (str);
}
