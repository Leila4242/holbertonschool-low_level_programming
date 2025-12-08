#include "main.h"

/**
 * _strlen - Returns the length of a string
 * @s: pointer to string
 *
 * Return: length of string
 */

void _puts(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		_putchar(str[i]);
	}
    _putchar("\n");
	return 0;
}
