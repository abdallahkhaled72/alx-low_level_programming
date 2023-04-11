#include <stdio.h>
#include <stdlib.h>

/**
 * main - print the summation of numbers
 * @argc: int
 * @argv: list
 * Return: integer number or Error or 0
*/

int main(int argc, char **argv)
{
	int add = 0;
	char *check;

	if (argc == 0)
	{
		printf("0\n");
	}
	else
	{
		while (--argc)
		{
			for (check = argv[argc]; *c; c++)
			{
				if (*check < 48 || *check > 58)
					return (printf("Error\n"), 1);
				add += atoi(argv[argc]);
			}
		}
		printf("%d\n", add);
	}
	return (0);
}
