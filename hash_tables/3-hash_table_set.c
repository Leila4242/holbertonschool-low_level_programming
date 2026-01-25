#include "hash_tables.h"
#include <string.h>
#include <stdlib.h>

/**
 * str_duplicate - Duplicates a string safely
 * @s: string to duplicate
 *
 * Return: pointer to duplicated string or NULL
 */
static char *str_duplicate(const char *s)
{
	char *copy;

	if (!s)
		return (NULL);

	copy = strdup(s);
	return (copy);
}

/**
 * create_node - Creates a new hash node with key and value
 * @key: key string
 * @value: value string
 *
 * Return: pointer to new node, or NULL on failure
 */
static hash_node_t *create_node(const char *key, const char *value)
{
	hash_node_t *node = malloc(sizeof(hash_node_t));

	if (!node)
		return (NULL);

	node->key = str_duplicate(key);
	if (!node->key)
	{
		free(node);
		return (NULL);
	}

	node->value = str_duplicate(value);
	if (!node->value)
	{
		free(node->key);
		free(node);
		return (NULL);
	}

	node->next = NULL;
	return (node);
}

/**
 * hash_table_set - Adds or updates an element in a hash table
 * @ht: hash table
 * @key: key (cannot be empty)
 * @value: value associated with key (duplicated)
 *
 * Return: 1 on success, 0 on failure
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *current, *new_node;

	if (!ht || !key || *key == '\0' || !value)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	current = ht->array[index];

	while (current)
	{
		if (strcmp(current->key, key) == 0)
		{
			free(current->value);
			current->value = str_duplicate(value);
			return (current->value ? 1 : 0);
		}
		current = current->next;
	}

	new_node = create_node(key, value);
	if (!new_node)
		return (0);

	new_node->next = ht->array[index];
	ht->array[index] = new_node;

	return (1);
}
