#include "main.h"

/**
 * *_strchr - fills memory with a constant byte
 * @s: pointer to put the constant
 * @c: constant
 * Retrun: pointer to s
 */

char *_strchr(char *s, char c)
{
	int num;

	for (num = 0; s[num] >= '\0'; num++)
	{
		if (s[num] == c)
		{
			return (s + num);
		}
	}
	return ('\0');
}
