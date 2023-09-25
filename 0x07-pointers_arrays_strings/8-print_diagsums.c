#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Print the sum of two diagonals of square matrix
 *
 * @a: the matrix
 * @size: the size
 *
 * Return: void.
 */
void print_diagsums(int *a, int size)
{
	int d, no1 = 0, no2 = 0;

	for (d = 0; d < size; d++)
	{
		no1 += a[(size + 1) * d];
		no2 += a[(size - 1) * (d + 1)];
	}

	printf("%d, %d\n", no1, no2);
}
