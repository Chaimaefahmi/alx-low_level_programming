#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node in a linked list at a certain index
 * @head: pointer
 * @index: int
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tempp = *head;
	listint_t *current = NULL;
	unsigned int m = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(tempp);
		return (1);
	}

	while (m < index - 1)
	{
		if (!tempp || !(tempp->next))
			return (-1);
		tempp = tempp->next;
		m++;
	}


	current = tempp->next;
	tempp->next = current->next;
	free(current);

	return (1);
}
