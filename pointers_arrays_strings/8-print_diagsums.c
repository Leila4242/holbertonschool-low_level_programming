#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Prints the sum of the two diagonals of a square matrix.
 * @a: Pointer to the square matrix (stored as a flattened array).
 * @size: The size (width/height) of the square matrix.
 *
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i;
	long int sum_primary = 0;
	long int sum_secondary = 0;

	for (i = 0; i < size; i++)
	{
		sum_primary += a[i * size + i];

		sum_secondary += a[i * size + (size - 1 - i)];
	}

	printf("%ld, %ld\n", sum_primary, sum_secondary);
}
