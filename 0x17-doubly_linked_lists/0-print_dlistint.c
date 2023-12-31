#include "lists.h"

/**
 *print_dlistint - prints doubly-linked list
 * @h: adress of head node
 * Return: size of list
 */
size_t print_dlistint(const dlistint_t *h)
	{
		size_t nodes = 0;
		/*****/
		if (!h)
		{
			return (0);
		}
		while (h)
		{
			printf("%d\n", h->n);
			h = h->next;
			nodes++;
		}
		return (nodes);
	}
