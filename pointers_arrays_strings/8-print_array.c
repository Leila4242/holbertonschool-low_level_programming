#include <stdio.h>
#include "main.h"

/**
 * print_array - prints n elements of an array of integers
 * @a: array pointer
 * @n: number of elements to print
 */
void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		printf("%d", a[i]);

		if (i != n - 1)
			printf(", ");

		i++;
	}
	printf("\n");
}
