#include "main.h"

/**
 * print_diagsums - summation of diagonals of a square matrix
 *
 * @a: 2d array of int types
 * @size: size of array (square0
*/

void print_diagsums(int *a, int size)
{
	int num, m1 = 0, m2 = 0;

	for (num = 0; num < size; num++)
	{
		m1 += a[num];
		m2 += a[size - num - 1];
		a += size;
	}
	printf("%d, ", m1);
	printf("%d\n", m2);
}
