#include <stdio>
#include <stdlib.h>

/**
 * main - a program that prints all arguments it receives
 * @argc: number of arguments received
 * @argv: array of argument vector
 * Return: Always return (0) success
 */

int main(int argc, char *argv[])
{
int n;
for (n = 0; n < argc; n++)
{
printf("%s\n", argv[n]);
}
return (0);
}
