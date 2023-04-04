#include "main.h"

/**
 * print_chessboard - prints chessboard
 *
 * @a: rows
 *
 * Return: nothing
*/

void print_chessboard(char (*a)[8])
{
	int s1, s2;

	for (s1 = 0; s1 < 8; s1++)
	{
		for (s2 = 0; s2 < 8; s2++)
		{
			_puthcar(a[s1][s2]);
		}
		_putchar('\n');
	}

}
