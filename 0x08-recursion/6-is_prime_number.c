#include "main.h"
#include <stdio.h>
/**
 * is_prime_number - check if n is a prime number
 * @r: int
 * @num: int
 * Return: 0 or 1
*/

int test(int num, int r);
int is_prime_number(int n)
{
	return (test(n, 2));
}

/**
 * test - check all number < n if they can divide it
 * @num: int
 * @r: int
 * Return: int
*/

int test(int num, int r)
{
	if (r >= num && num > 1)
		return (1);
	else if (num % r == 0 || num <= 1)
		return (0);
	else
		return (test(num, r + 1));
}
