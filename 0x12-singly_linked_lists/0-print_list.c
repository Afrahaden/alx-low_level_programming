#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints all the elements of a list_t list
 *
 * @h: list node
 * Description: If str is NULL, print '[0] (nil)'
 * Allowed to use printf
 *
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t i;	/* declare counter initialized to 0 */

	for (i = 0; h; i++)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
	}
	return (i);
}
