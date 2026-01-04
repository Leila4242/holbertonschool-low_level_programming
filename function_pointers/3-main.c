#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - entry point for the calculator program
 * @argc: argument count
 * @argv: array of argument strings
 *
 * Return: 0 on success, exits with status 98, 99, or 100 on errors
 */
int main(int argc, char *argv[])
{
	int (*func)(int, int);
	int num1, num2;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	func = get_op_func(argv[2]);

	if (!func)
	{
		printf("Error\n");
		exit(99);
	}

	if ((argv[2][0] == '/' || argv[2][0] == '%') && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", func(num1, num2));
	return (0);
}
