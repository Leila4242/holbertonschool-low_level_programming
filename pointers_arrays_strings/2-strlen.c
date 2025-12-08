#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: pointer to string
 *
 * Return: void
 */

int _strlen(char *s)
{	char *str[] = s;
	int i;
	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	printf("Uzunluq: %d\n", i);
	return (0);
}
