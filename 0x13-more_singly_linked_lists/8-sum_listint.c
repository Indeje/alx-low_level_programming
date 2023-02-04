#include <stdlib.h>
#include "lists.h"

/**
 * sum_listint - Find sum of list elements
 * @head: linked list
 *
 * Return: sum on success, 0 if empty
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head)
	{
		while (head)
		{
			sum += head->n;
			head = head->next;
		}
	}

	return (sum);
}
