#include <stdio.h>

/**
 * main - Entry point
 * Description: Prints the alphabet in lowercase followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;

	c = 'a';
	while (c <= 'z')
	{
        if (c=='q' || c=='e'){
          c+=2;
        }
		putchar(c);
		c++;
	}
	putchar('\n');

	return (0);
}
