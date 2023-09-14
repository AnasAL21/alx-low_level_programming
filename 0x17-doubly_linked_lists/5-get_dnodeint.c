#include "lists.h"
/**
 * get_dnodeint_at_index - return node at index
 *@head: address of ptr to current head
 *@index: index of node
 *Return: addres od node or null
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = head;
	unsigned int count = 0;
	/****/
	while (current)
	{
		if (count == index)
		{
			return (current);
		}
		count++;
		current = current->next;
	}
	return (NULL);
}
