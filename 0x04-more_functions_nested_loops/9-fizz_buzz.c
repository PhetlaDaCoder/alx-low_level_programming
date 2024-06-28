#include "main.h"
#include <stdio.h>

/**
 * main - prints 1 to 100, followwed by new line
 * but multiples of 3 prints of fizz\multiples by 5 prints of buzz
 * Return: 0 when done
 */
int main(void)
{
	int x = 1;

	while (x < 101)
	{
		if (x % 3 == 0 && x % 5 == 0)
		{
			printf("%s", "FizzBuzz");
		}
		else if (x % 3 == 0)
		{
			printf("%s", "Fizz");
		}
		else
		{
			printf("%d", x);
		}

		if (x != 100)
		{
		printf(" ");
		}
		x++;
	}
	printf("\n");
	return (0);
}
