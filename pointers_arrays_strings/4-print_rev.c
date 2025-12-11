#include "main.h"
#include <unistd.h>

/**
 * print_rev - prints a  reverse string, followed by a new line, to stdout
 * @s: pointer to the string to print
 *
 * Return: void
 */

void print_rev(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		write(1, &s[i], 1);
		i++;
	}
	i--;

	while (i>=0)
	{
		write(1, &s[i], 1);
		i--;
	}
	write(1, "\n", 1);
}

