#include "lists.h"

/**
 * print_listint -  a function that prints all the elements of a linked list
 * @h: pointer of type listint_t
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t m = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		m++;
		h = h->next;
	}
	return (m);
}
