#include "main.h"
#include <limits.h>

/**
 * check_overflow - checks for integer overflow
 * @num: the current accumulated number (negative)
 * @digit: the new digit to add
 * @sign: the sign (1 for positive, -1 for negative)
 *
 * Return: 0 if no overflow, INT_MAX or INT_MIN on overflow
 */
int check_overflow(int num, int digit, int sign)
{
	if (sign == 1)
	{
		if (num < (INT_MIN + digit) / 10)
			return (INT_MAX);
	}
	else
	{
		if (num < INT_MIN / 10 || (num == INT_MIN / 10 && digit > 8))
			return (INT_MIN);
	}
	return (0);
}

/**
 * _atoi - converts a string to an integer
 * @s: input string
 *
 * Return: integer value
 */
int _atoi(char *s)
{
	int i = 0, sign = 1, ov_res = 0;
	int num = 0; /* num həmişə mənfi saxlanılır */
	int started = 0;
	int digit;

	while (s[i] != '\0')
	{
		if (!started && (s[i] == '-' || s[i] == '+'))
		{
			if (s[i] == '-')
				sign *= -1;
		}
		else if (s[i] >= '0' && s[i] <= '9')
		{
			started = 1;
			digit = s[i] - '0';

			ov_res = check_overflow(num, digit, sign);
			if (ov_res != 0)
				return (ov_res);

			num = num * 10 - digit;
		}
		else if (started)
			break;

		i++;
	}

	if (sign == 1)
		return (-num);

	return (num);
}
