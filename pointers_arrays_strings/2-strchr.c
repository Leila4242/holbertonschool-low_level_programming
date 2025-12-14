#include "main.h"
#include <stddef.h>

/**
 * _strchr - Locates the first occurrence of the character c in the string s.
 * @s: The string to be scanned.
 * @c: The character to be searched for.
 *
 * Return: A pointer to the first occurrence of the character c in s,
 * or NULL if the character is not found.
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (1)
	{
		if (s[i] == c)
		{
			return (s + i);
		}

		if (s[i] == '\0')
		{
			break;
		}

		i++;
	}

	return (NULL);
}
