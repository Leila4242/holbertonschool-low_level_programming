#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - returns the length of a string
 * @s: string
 *
 * Return: length of s
 */
int _strlen(char *s)
{
	int len = 0;

	if (!s)
		return (0);

	while (s[len])
		len++;

	return (len);
}

/**
 * _strcpy - copies a string from src to dest
 * @dest: destination
 * @src: source
 *
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	if (!src)
	{
		dest[0] = '\0';
		return (dest);
	}

	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/**
 * new_dog - creates a new dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 *
 * Return: pointer to new dog, NULL if fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;
	char *n, *o;

	if (!name || !owner)
		return (NULL);

	d = malloc(sizeof(dog_t));
	if (!d)
		return (NULL);

	n = malloc(_strlen(name) + 1);
	if (!n)
	{
		free(d);
		return (NULL);
	}

	o = malloc(_strlen(owner) + 1);
	if (!o)
	{
		free(n);
		free(d);
		return (NULL);
	}

	_strcpy(n, name);
	_strcpy(o, owner);

	d->name = n;
	d->age = age;
	d->owner = o;

	return (d);
}
