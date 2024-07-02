#include "main.h"
#include <stdio.h>
/**
 * print_array - prints n value of as array of intergers
 * @a: int to check.
 * @n: int to check.
 * Return: 0 when done.
 */
void print_array(int *a, int n)
{
	int x;

	for (x = 0; x < n; x++)
		if (x != n - 1)
		printf("%d, ", a[x]);
		else
			printf("%d", a[x]);
printf("\n");
}
