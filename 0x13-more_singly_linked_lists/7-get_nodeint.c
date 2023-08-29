#include "lists.h"

/**
 * get_nodeint_at_index - returns the node at a certain index in a linked list
 * @head: pointer
 * @index: int
 * Return: if the node does not exist, return NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *tempp = head;

	while (tempp && i < index)
	{
		tempp = tempp->next;
		i++;
	}

	return (tempp ? tempp : NULL);
}
