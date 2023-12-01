#include "hash_tables.h"

/**
 * hash_table_print - this function prints a has table.
 * @ht: the hash table.
 * Return: No return value.
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int idx = 0;
	hash_node_t *node;
	char *string = "";

	if (!ht || !ht->array)
		return;

	putchar('{');
	while (idx < ht->size)
	{
		node = ((ht->array)[idx]);
		while (node)
		{
			printf("%s'%s': '%s'", string, node->key, node->value);
			string = ", ";
			node = node->next;
		}
		idx++;
	}
	puts("}");
}
