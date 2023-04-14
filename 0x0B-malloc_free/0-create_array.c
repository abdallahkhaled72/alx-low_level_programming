#include "main.h"
#include <stdlib.h>

/**
 * create_array - create an array of characters
 * @size: size of array
 * @c: char will be initialized
 * Return: NULL if size is zero or pointer to the array
*/

char *create_array(unsigned int size, char c)
{
	char *pointer = malloc(size);

	if (size == 0 || pointer == 0)
		return (0);

	while (size--)
		pointer[size] = c;
	return (pointer);
}
