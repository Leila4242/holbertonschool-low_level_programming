#include "main.h"
#include <stddef.h>

/**
 * _strstr -Locates the first occurrence of the substring needle
 * in the string haystack.
 * @haystack: The string to be searched.
 * @needle: The substring to be located.
 *
 * Return: A pointer to the beginning of the located substring,
 * or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	if (*needle == '\0')
	{
		return (haystack);
	}

	for (i = 0; haystack[i] != '\0'; i++)
	{
		j = 0;
		while (needle[j] != '\0' && haystack[i + j] == needle[j])
		{
			j++;
		}

		if (needle[j] == '\0')
		{
			return (&haystack[i]);
		}

		if (haystack[i + j] == '\0' && needle[j] != '\0')
		{
			return (NULL);
		}
	}

	return (NULL);
}
