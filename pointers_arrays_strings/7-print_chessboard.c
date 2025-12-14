#include <stdio.h>
#include "main.h"

/**
 * print_chessboard - Prints a standard 8x8 chessboard.
 * @a: The 8x8 array representing the chessboard.
 *
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
	int row = 0;
	int col;

	while (row < 8)
	{
		col = 0;
		while (col < 8)
		{
			printf("%c", a[row][col]);
			col++;
		}
		printf("\n");
		row++;
	}
}
