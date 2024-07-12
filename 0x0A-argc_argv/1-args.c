#include <stdio.h>

/**
 * main - prints arguments
 * @argc: arguments counted
 * @argv: total arguments
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}
