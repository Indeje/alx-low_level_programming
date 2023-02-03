#include "lists.h"
#include <stdlib.h>


/**
 * add_nodeint_end - Add new element at the begninning of a list
 * @head: linked list
 * @n: element to be added
 *
 * Return: Address pf the new element on success, else NULL
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *tmp, *newnode;

	tmp = *head;
	newnode = malloc(sizeof(listint_t));

	if (newnode)
	{
		newnode->n = n;
		newnode->next = NULL;

		if (*head == NULL)
		{
			*head = newnode;
			return (newnode);
		}

		while (tmp->next)
			tmp = tmp->next;

		tmp->next = newnode;

		return (newnode);
	}

	return (NULL);
}
