#include "main.h"

/**
 * _sqrt_recursion - finds square root
 *
 * @n: number
 *
 * Return: no
 */

int _sqrt_recursion(int n)
{
	return (square(n, 1));
}

/**
 * _square - finds square root
 * @n: int to find square root
 * @sqrt: square root
 * Return: no
 */

int square(int n, int sqrt)
{
	if (sqrt * sqrt == n)
		return (sqrt);
	else if (sqrt * sqrt < n)
		return (square(n, sqrt + 1));
	else
		return (-1);
}
