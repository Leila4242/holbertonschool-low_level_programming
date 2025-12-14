#include "main.h"

/**
 * leet - Encodes a string into 1337.
 * @s: Pointer to the string to be encoded.
 *
 * Return: A pointer to the modified string s.
 */
char *leet(char *s)
{
	int i = 0;
	int j;

	char leet_chars[] = "aAeEoOtTlL";
	char leet_replaces[] = "4433007711";

	while (s[i] != '\0')
	{
		j = 0;
		while (j < 10)
		{
			if (s[i] == leet_chars[j])
			{
				s[i] = leet_replaces[j];
				break;
			}
			j++;
		}
		i++;
	}

	return (s);
}
