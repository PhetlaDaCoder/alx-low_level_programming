#include "main.h"

/**
 * *_strspn - finds length of prefix substring
 * @s: string to analyze
 * @accept: string containing the list of characters to match in s
 *
 * Return: number of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int index, j, counter;

	counter = 0;
	for (index = 0; s[index] != '\0'; index++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[index])
			{
				counter++;
				break;
			}
		}
		if (accept[j] != s[index])
		{
		break;
		}
	}
	return (counter);
}

