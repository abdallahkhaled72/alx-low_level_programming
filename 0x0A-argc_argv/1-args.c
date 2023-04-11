#include <stdio.h>

/**
 * main - prints integer number followed by new line
 * @argc: int
 * @argv: list
 * Return: 0
*/

int main(int argc, char **argv)
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
