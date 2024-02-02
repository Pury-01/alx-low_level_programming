#include "hash_tables.h"

/**
 *hash_table_set - Adds an element in a hash table
 *
 *@ht: A pointer to the hash table
 *@key: The key to add, it cannot be an empty string
 *
 *@value: The value associated with key, it must be duplicated
 *
 *Return: 1(successful) otherwise 0
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new;
	char *value_duplicate;
	unsigned long int index, i;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	value_duplicate = strdup(value);
	if (value_duplicate == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	for (i = index; ht->array[i]; i++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = value_duplicate;
			return (1);
		}
	}

	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
	{
		free(value_duplicate);
		return (0);
	}
	new->key = strdup(key);
	if (new->key == NULL)
	{
		free(new);
		return (0);
	}
	new->value = value_duplicate;
	new->next = ht->array[index];
	ht->array[index] = new;

	return (1);
}
