#include "lists.h"

/**
 * nsert_nodeint_at_index - inserts a new node in a linked list
 * @head: pointer
 * @idx:  the index of the list where the new node should be added. Index starts at 0
 * @n: int
 * Return: the address of the new node, or NULL if it failed, if it is not possible to add the new node at index idx, do not add the new node and return NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int m;
	listint_t *node;
	listint_t *tempp = *head;

	node = malloc(sizeof(listint_t));
	if (!node || !head)
		return (NULL);

	node->n = n;
	node->next = NULL;

	if (idx == 0)
	{
		node->next = *head;
		*head = node;
		return (node);
	}

	for (i = 0; tempp && m < idx; m++)
	{
		if (m == idx - 1)
		{
			node->next = tempp->next;
			tempp->next = node;
			return (node);
		}
		else
			tempp = tempp->next;
	}

	return (NULL);
}
