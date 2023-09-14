#include "lists.h"
/**
 * add_dnodeint_end - add new head node to dlist
 *@head: address of ptr to current head
 *@n: int of new node
 *Return: addres od node or null
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));
	/****/
	if (!new_node)
	{
		return (NULL);
	}
	/***/
	new_node->n = n;
	new_node->next = NULL;
	/***/
	if (*head)
	{
		dlistint_t *tail = *head;
		/****/
		while (tail->next)
		{
			tail = tail->next;
		}
		tail->next = new_node;
		new_node->prev = tail;
	}
	else
	{
		new_node->prev = NULL;
		*head = new_node;
	}
	return (new_node);
}
