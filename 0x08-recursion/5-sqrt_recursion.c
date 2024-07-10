#include "main.h"

/**
 * _sqrt_recursion - main function
 * @n: int n
 * Return: int
 */
int _sqrt_recursion(int n)
{
	int square = 2;

	if (n < 0)
		return (-1);
	else if (n == 0 || n == 1)
		return (n);
	return (isqrt(n, square));
}

/**
 * _sqrt - _sqrt_recursion
 * @n: integer paramte
 * @i: integer parameter
 * Return: sqrt
 */
int _sqrt(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (isqrt(n, i + 1));
}
