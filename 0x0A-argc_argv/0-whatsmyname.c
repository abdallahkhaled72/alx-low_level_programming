#include <stdio.h>

/**
 * main - prints name followed by new line
 * @argc: int
 * @argv: list
 * Return: 0
*/

int main(int argc __attribute__((unused)), char const **argv)
{
	argc;
	printf("%s\n", argv[0]);
	return (0);
}
