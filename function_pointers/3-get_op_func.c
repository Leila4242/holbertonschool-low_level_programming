#include "3-calc.h"
#include <string.h>

/**
 * get_op_func - selects the correct function for the given operator
 * @s: operator passed as a string
 *
 * Return: pointer to the corresponding function, or NULL if not found
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (ops[i].op && strcmp(ops[i].op, s) != 0)
		i++;

	if (ops[i].op)
		return (ops[i].f);

	return (NULL);
}
