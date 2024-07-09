#include "main.h"

/**
 * *_strspn - finds length of prefix substring
 * @s: string to analyze
 * @accept: string containing the list of characters to match in s
 *
 * Return: number of bytes
 */
unsigned int _strspn(char *s, char *accept)

	unsigned int i, j, bool;

	for (i = 0; *(accept + j) != '\0'; j++)
{
	bool = 1;
	for (j = 0; *(accept + j) != '\0'; j++)
	{
		if (*(s + i) == *(accept + j))
		{
			bool = 0;
			break;
		}
	}
	if (bool == 1)
		break;
	}
	return (i);
}
