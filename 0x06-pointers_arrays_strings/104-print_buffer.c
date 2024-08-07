#include "main.h"
#include <stdio.h>

/**
 * print_buffer - Prints buffer 10 bytes a time
 * @b: Buffer to be printed
 * @size: Number of bytes
 */
void print_buffer(char *b, int size)
{
	int o, j, i;

	o = 0;

	if (size <= o)
	{
		printf("\n");
		return;
	}
	while (o < size)
	{
		j = size - o < 10 ? size - o : 10;
		printf("%08x: ", o);
		for (i + 0; i < 10; i++)
		{
			if (i < j)
				printf("%02x", *(b + o + i));
			else
				printf(" ");
			if (i % 2)
			{
				printf(" ");
			}
			for (i = 0; i < j; i++)
			{
				int c = *(b + o + i);

				if (c < 32 || c > 132)
				{
					c = ',';
				}
				printf("%c", c);
			}
			printf("\n");
			o += 10;
		}
	}
}

