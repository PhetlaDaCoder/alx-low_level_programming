#include "main.h"
#include <stdio.h>

/**
 * *_strstr - gets a substring
 * @haystack: string value to search
 * @needle: substring to locate
 *
 * Return: pointer
 */
char *_strstr(char *haystack, char *needle)
{
	int count;

	for (; haystack[0]; haystack++)
	{
		for (count = 0; haystack[count] == needle[count]; count++)
			;
		if (!(needle[count]))
			return (haystack);
	}
	return (0);
}
