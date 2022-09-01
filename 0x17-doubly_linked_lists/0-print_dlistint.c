#include <stddef.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint - prints elements of a doubly linked list
 * @h: pointer to head of the list
 *
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t n = 0;	/* number of nodes */

	while (h)
	{
		printf("%i\n", h->n);
		h = h->next;
		n++;
	}
	return (n);
}
