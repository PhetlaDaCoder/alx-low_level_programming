#include "main.h"
#include <stdio.h>

/**
 * main - prints 1 to 100, followwed by new line
 * but multiples of 3 prints of fizz\multiples by 5 prints of buzz
 * Return: 0 when done
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (1 % 3 == 0 && i % 5 != 0)
		{
			printf("Fizz");
		} else if (i % 5 == 0 && i % 3 != 0)
		{
			printf(" Buzz");
		} else if (1 % 3 == 0 && i % 5 == 0)
		{
			printf(" FizzBuzz");
		} else if (i == 1)
		{
			printf("%d", i);
		} else
		{
			printf(" %d", i);
		}
	}
	printf("\n");

	return (0);
}
