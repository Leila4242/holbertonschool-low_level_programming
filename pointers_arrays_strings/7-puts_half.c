#include "main.h"
#include <unistd.h>

/**
 * puts_half - prints second half of a string
 * @str: string input
 */
void puts_half(char *str)
{
	int len = 0;
	int start = 0;

	while (str[len] != '\0')
		len++;

	if (len % 2 == 0)
		start = len / 2;
	else
		start = (len + 1) / 2;

	while (start < len)
	{
		write(1, &str[start], 1);
		start++;
	}

	write(1, "\n", 1);
}
