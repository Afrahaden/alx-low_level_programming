#include "lists.h"

/**
 * sum_dlistint - gets the sum of all the data (n) of a doubly linked list
 * @head: pointer to start of list
 *
 * Return: sum of all the data
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;
	int sum = 0;

	tmp = head;
	while (tmp)
	{
		sum += tmp->n;
		tmp = tmp->next;
	}
	return (sum);
}
