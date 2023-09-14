#include "lists.h"
/**
 * sum_dlistint - sum the value of dlist
 *@head: address of ptr to current head
 *Return: addres od node or null
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	
	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
