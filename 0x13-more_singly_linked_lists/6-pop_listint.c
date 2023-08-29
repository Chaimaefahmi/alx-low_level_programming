#include "lists.h"

/**
 * pop_listint - deletes the head node of a linked list
 * @head: Pointer to a pinter
 * Return: the head node’s data (n), if the linked list is empty return 0
 */

int pop_listint(listint_t **head)
{
	listint_t *tempp;
	int m;

	if (!head || !*head)
		return (0);

	m = (*head)->n;
	tempp = (*head)->next;
	free(*head);
	*head = tempp;

	return (m);
}
