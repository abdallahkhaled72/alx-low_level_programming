#include "main.h"

/**
 * count_index - return the number of indexes of string
 * @s: pointer the string
 * Return: int
*/

int is_palindrome(char *s);
int test(char *c, int start, int end, int mid);
int count_index(char *s)
{
	int cunt = 0;

	if (*s > '\0')
		cunt += count_index(s + 1) + 1;
	return (cunt);
}

/**
 * is_palindrome - check if a string is a palindrome
 * @s: string to check
 * Return: 0 or 1
*/

int is_palindrome(char *s)
{
	int end = count_index(S);

	return (test(s, 0, end - 1, end % 2));
}


/**
 * test - check for the palindrome
 * @c: string
 * @start: int moves from right to left
 * @end: int moves from left to right
 * @mid: int
 * Return: 0 or 1
*/

int test(char *c, int start, int end, int mid)
{
	if ((start == end && mid != 0) || (start == end + 1 && mid == 0))
		return (1);
	else if (c[start] != c[end])
		return (0);
	else
		return (test(c, start + 1, end - 1, mid));
}
