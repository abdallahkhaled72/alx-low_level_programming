#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins to change for
 * an amount of money
 * @argc: number of commandline arguments
 * @argv: pointer to an array of command line at arguments
 * Return: 0 (success) or NULL (fail)
*/

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		int y, changer = 0, amount = atoi(argv[1]);
		int base[] = {25, 10, 5, 2, 1};

		for (y = 0; y < 5; y++)
		{
			if (amount >= base[i])
			{
				changer += amount / base[i];
				amount = amount % base[i];
				if (amount % base[i] == 0)
				{
					break;
				}
			}
		}
		printf("%d\n", changer);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
