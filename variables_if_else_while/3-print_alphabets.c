#include <stdio.h>

/**
 * main - Entry point
 * Description: Prints the alphabet in lowercase followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c, ch;

	c = 'a';
	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	ch = 'A';
	while (ch <= 'Z')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');

	return (0);
}
