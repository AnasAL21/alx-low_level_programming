#include "lists.h"
/**
 *free_dlistint - add new head node to dlist
 *@head: address of ptr to current head
 *Return: size od list
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;
	/****/
	while (current)
	{
		dlistint_t *next = current->next;
		/****/
		free(current);
		current = next;
	}
	head = NULL;
}
