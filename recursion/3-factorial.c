#include "main.h"

/**
 * factorial - returns the factorial of the given number
 * @n: given number
 *
 * Return: factorial of the number, or -1 if n is negative
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
