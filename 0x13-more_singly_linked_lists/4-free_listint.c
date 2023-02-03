#include "lists.h"
#include <stdlib.h>


/**
 * free_listint - Frees a linked list
 * @head: linked list
 *
 * Return: no return value
 */

void free_listint(listint_t *head)
{
	listint_t *tmp = head;

	while (tmp)
	{
		tmp = tmp->next;
		free(head);
		head = tmp;
	}
}
