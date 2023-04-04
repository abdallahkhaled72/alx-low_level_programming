#include "main.h"

/**
 * _strpbrk - search a string for any of a set of bytes
 *
 * @s: string
 * @accept: string to match
 *
 * Return: pointer to the byte in s that matches one of the bytes in accept
 * or NULL if no such byte is found
*/

char *_strpbrk(char *s, char *accept)
{
	int n1, n2;
	char *p;

	n1 = 0;
	while (s[n1] != '\0')
	{
		n2 = 0;
		while (accept[n2] != '\0')
		{
			if (accept[n2] == s[n1])

			{
				p = &s[n1];
				return (p);
			}
			n2++;
		}
		n1++;
	}
	return (0);
}
