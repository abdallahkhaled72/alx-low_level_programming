#include <stdio.h>
#include <stdlib.h>

/**
 * main - print multiplication result of two numbers
 * @argc: int
 * @argv: list
 * Return: 0 if success, non if fail
*/

int main(int argc, char **argv)
{
	int result;

	if (argc == 3)
	{
		result = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", result);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
