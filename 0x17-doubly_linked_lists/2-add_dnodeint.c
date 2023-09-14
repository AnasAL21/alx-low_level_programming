#include "lists.h"
/**
 * add_dnodeint - add new head node to dlist
 *@head: address of ptr to current head
 *@n: adress of head node
 *Return: size od list
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));
	/****/
	if (!new_node)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->prev = NULL;
	/****/
	if (*head)
	{
		new_node->next = *head;
		(*head)->prev = new_node;
	}
	else
	{
		new_node->next = NULL;
	}
	*head = new_node;
	return (new_node);
}
