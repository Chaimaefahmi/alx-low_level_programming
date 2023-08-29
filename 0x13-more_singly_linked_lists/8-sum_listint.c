#include "lists.h"

/**
 * sum_listint - calculates the sum of all the data in a listint_t list
 * @head: pointer
 * Return: if the list is empty, return 0, returns the sum of all the data (n)
 */
int sum_listint(listint_t *head)
{
	int s;
	listint_t *tempp = head;

	while (tempp)
	{
		s += tempp->n;
		tempp = tempp->next;
	}
	return (s);
}
