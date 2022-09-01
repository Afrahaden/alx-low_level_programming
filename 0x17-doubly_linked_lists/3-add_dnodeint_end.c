#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint_end - adds new node to the end of doubly linked list
 * @head: double pointer to head of list
 * @n: element to add
 *
 * Return: address of new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *tail;	/* get to the rear of the list */

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	new->next = NULL;

	if (!(*head))
		*head = new;
	else
	{
		tail = *head;
		while (tail->next)
		{
			tail = tail->next;
		}
		tail->next = new;
		new->prev = tail;
		tail = new;
	}
	return (new);
}
