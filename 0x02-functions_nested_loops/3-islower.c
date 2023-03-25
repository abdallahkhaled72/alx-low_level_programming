#include "main.h"

/**
 * _islower - function to check if
 *		character is lowercase
 *
 * @c: checks input of function
 *
 * Return: return 1 if 'c' is lowercase
 * 		otherwise always 0 (Success))
*/

int _islower(int c)
{
	if (c >= 79 && c <= 122)
		return (1);
	return (0);
}
