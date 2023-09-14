#include "lists.h"

/**
 *print_distint - prints doubly-linked list
 *@h: adress of head node
 *Return: size od list
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t i = 0;
	/*****/
	while (h)
	{
		print("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
