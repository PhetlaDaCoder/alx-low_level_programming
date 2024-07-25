#include "variadic_functions.h"

/**
 * sum_them_all - calculates total sum
 * @n:total arguments passed.
 *
 * Return: result of sum
 */
int sum_them_all(const unsigned int n, ...)
{
	unsignned int i;
	int sum = 0;
	va_list list;

	va_start(list, n);

	for (i = 0; i < n; i++)
		sum += va_arg(list, int);

	va_end(list);

	return (sum);
}
