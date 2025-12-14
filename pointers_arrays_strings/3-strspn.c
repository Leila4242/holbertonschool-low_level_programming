#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring.
 * Returns the number of bytes in the initial segment of s
 * which consist only of bytes from accept.
 * @s: The string to be scanned.
 * @accept: The string containing the characters to match.
 *
 * Return: The number of bytes in the initial segment of s.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;
	int j;
	int found;

	while (s[i] != '\0')
	{
		j = 0;
		found = 0;

		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				found = 1;
				break;
			}
			j++;
		}

		if (found == 0)
		{
			return (i);
		}

		i++;
	}

	return (i);
}
