
#include "main.h"

/**
 * sqrt_find - first checks for the square root of given number
 * @g: the root to check through
 * @c: number to find sqrt of
 *
 * Return: The sqrt of C or -1 if number does not have natural sqrt
 */

int sqrt_find(int n, int i)
{
if (i * i == n)
return (i);
if (i * i > n)
return (-1);
return (sqrt_find(i + 1, n));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to find sqrt of
 *
 * Return: natural square root or -1(if not natural square root)
 */

int _sqrt_recursion(int n)
{
if (n == 0)
return (0);
return (sqrt_find(1, n));
}
