#include <stdio.h>

/**
 * main - prints the size of various types on the computer it is compiled and run on.
 *
 * Return: 0 when done.
 */

int main(void)
{
	printf("Size of char: %i byte(s)\n", sizeof(char));
	printf("SIze of int: %i byte(s)\n", sizeof(int));
	printf("Size of long int: %i byte(s)\n", sizeof(long int));
	printf("Size of long long int: %i byte(s)\n", sizeof(long long int));
	printf("Size of float: %i byte(s)\n", sizeof(float));
	return (0);
}
