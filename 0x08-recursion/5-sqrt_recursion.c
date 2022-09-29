#include "main.h"

int find_sqrt(int num, int root);
int _sqrt_recursion(int n);

/**
 * find_sqrt - returns the square root of a number
 * @num: test number
 * @root: the squared number
 * Return: the square root of n
 */

int find_sqrt(int num, int root)
{
if ((root * root) == num)
return (root);
if (root == num / 2)
return (-1);
return (find_sqrt(num, root + 1));
}

/**
 * _sqrt_recursion - Returns square root of number
 * @n: The number to be returned
 * Return: Returns the square root of n
 */

int _sqrt_recursion(int n)
{
int root = 0;
if (n < 0)
return (-1);
if (n == 1)
return (1);
return (find_sqrt(n, root));
}
