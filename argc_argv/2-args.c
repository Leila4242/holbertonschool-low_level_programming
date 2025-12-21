#include <stdio.h>

/**
 * main - prints the number of arguments passed into the program
 * @argc: argument count
 * @argv: argument vector (unused)
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	(void)argv; /* Mark argv as unused to avoid compiler warnings */

	printf("%d\n", argc - 1);

	return (0);
}
