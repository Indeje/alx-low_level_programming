#include "lists.h"
#include <stdlib.h>


/**
 * add_nodeint - adds new element at the beginning of list
 * @head: linked list
 * @n: element to be added
 *
 * Return: address of new element on success, else NULL
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode_ptr = malloc(sizeof(listint_t));

	if (head)
	{
		newnode_ptr->n = n;
		newnode_ptr->next = *head;
		*head = newnode_ptr;

		return (newnode_ptr);
	}

	return (NULL);
}
