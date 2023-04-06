#include "main.h"

/**
 * _sqrt_recursion - find natural square root
 * @num: int
 * @result: square root
 * Return: int
*/

int root(int num, int result);
int _sqrt_recursion(int n)
{
	return (root(n, 1));
}
/**
 * root - find square root
 * @num: int to find square root
 * @result: square
 * Return: int
*/
int root(int num, int result)
{
	if (result * result == num)
	{
		return (result);
	} else if (result * result < num)
	{
		return (root(num, result + 1));
	}
	else
	{
		return (-1);
	}
}
