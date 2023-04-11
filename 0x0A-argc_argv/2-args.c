#include <stdio.h>

/**
 * main - print each argument passed into the program
 * @argc: int
 * @argv: list
 * Return: 0
*/

int main(int argc, char **argv)
{

	int count = 0;

	while (argc--)
	{
		printf("%s\n", argv[i]);
		count++;
	}
	return (0);
}
