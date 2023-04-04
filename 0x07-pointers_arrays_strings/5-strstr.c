#include "main.h"

/**
 * *_strstr - search a character for any of a set of bytes
 *
 * @haystack: string
 * @needle: string to match
 *
 * Return: a pointer to the beginning of the located substring
 * or NULL if the substring is not found
*/

char *_strstr(char *haystack, char *needle)
{
	int n1, n2;
	char *p;

	n1 = 0;
	while (haystack[n1] != '\0')
	{
		n2 = 0;
		while (needle[n2] != '\0')
		{
			if (needle[n2] == s[n1])
			{
				p = &haystack[n1];
				return (p);
			}
			n2++;
		}
		n1++;
	}
	return ("NULL");
}
