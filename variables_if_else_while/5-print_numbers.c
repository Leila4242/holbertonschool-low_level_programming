#include <stdio.h>

/**
 * main - Entry point
 * Description: Prints numbers from 0 to 10
 * Return: Always 0 (Success)
 */
int main(void)
{
	int c;

	c = 0;
	while (c < 10)
	{
		printf("%d", c);
		c++;
	}

	return (0);
}
