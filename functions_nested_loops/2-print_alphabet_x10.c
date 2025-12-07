#include "main.h"

/**
 * print_alphabet - Prints the alphabet in lowercase
 *
 * Description: Prints a-z followed by a new line
 *
 * Return: void
 */
void print_alphabet(void)
{
	int n = 0;

	while (n < 10)
	{
		char letter = 'a';

		while (letter <= 'z')
		{
			_putchar(letter);
			letter++;
		}
		_putchar('\n');
		n = n + 1;
	}
}