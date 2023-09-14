#include "lists.h"
/**
 *dlistint_len - return len dlist
 *@h: adress of head node
 *Return: size od list
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t a = 0;
	/*****/
	if (!h)
	{
		return (0);
	}
	while (h)
	{
		a++;
		h = h->next;
	}
	return (a);
}
