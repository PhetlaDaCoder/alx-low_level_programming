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
	char *results = haystack, *mneedle = needle;

	while (*haystack)
	{
		while (*needle)
		{
			if (*haystack++ != *needle++)
			{
				break;
			}
		}
		if (!*needle)
		{
			return (results);
		}
		needle = mneedle;
		results++;
		haystack = result;
	}
	return (0);
}
