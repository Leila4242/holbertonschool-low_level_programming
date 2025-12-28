#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * malloc_checked - Allocates memory using malloc
 * @b: The size of memory to allocate in bytes
 *
 * Return: Pointer to allocated memory
 *         If malloc fails, terminate process with status 98
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);

	return (ptr);
}
