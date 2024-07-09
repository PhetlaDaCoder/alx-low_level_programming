#include "main.h"

/**
 * _strpbrk - seasrches for a strig
 *
 * @s: first in string
 * @accept: matches bytes
 *
 * Return: byte pointer
 */
char *_strpbrk(char *s, char *accept)
{
	int index;

	while (*s)
	{
		for (index = 0; accept[index]; index++)
		{
			if (*s == accept[index])
					return (s);
		}
		s++;
	}
	return ('\0');
}
