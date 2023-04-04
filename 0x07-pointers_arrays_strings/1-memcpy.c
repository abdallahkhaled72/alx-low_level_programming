#include "main.h"

/**
 * *_memcpy - copies memory area
 *
 * @dest: memory area
 * @src: source
 * @n: length of srcc to be copied
 *
 * Return: the pointer to dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int num;

	for (unm = 0; num < n; num++)
	{
		dest[num] = src[num];
	}

	return (dest);
}
