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
	int;
		while (*s)
		{
			for (i = 0; accept[i]; i++)
			{
				if (*s == accept[i])
					return (s);
			}
			s++;

		}
	return (NULL);
}
