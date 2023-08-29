#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked lists
 *
 * @h: pointer
 *
 * Return: number of nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t m;

	for (m = 0; h != NULL; m++)
	{
		h = h->next;
	}
	return (m);
}

