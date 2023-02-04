#include "lists.h"
#include <stdlib.h>

/**
 *pop_listint - deletes the head node of a linked list
 *@head: head of the list
 *
 *Return: the deleted node data
 */

int pop_listint(listint_t **head)
{
	listint_t *new_head;
	int data = 0;

	if (*head != NULL)
	{
		new_head = (*head)->next;
		data = (*head)->n;
		free(*head);
		*head = new_head;
	}
	return (data);
}
