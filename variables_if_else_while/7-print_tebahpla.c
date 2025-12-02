#include <stdio.h>

/**
 * main - Entry point
 * Description: Prints the alphabet in lowercase followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;

	c = 'z';
	while (c >= 'a')
	{
		putchar(c);
		c--;
	}
	putchar('\n');

	return (0);
}
