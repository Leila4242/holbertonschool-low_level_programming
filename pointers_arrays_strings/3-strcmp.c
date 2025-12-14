#include "main.h"

/**
 * _strcmp - Compares two strings lexicographically.
 * @s1: The first string to be compared.
 * @s2: The second string to be compared.
 * Return: 0 if s1 and s2 are equal, a negative integer if s1 is less than s2,
 * or a positive integer if s1 is greater than s2.
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
	{
		i++;
	}

	return (s1[i] - s2[i]);
}
