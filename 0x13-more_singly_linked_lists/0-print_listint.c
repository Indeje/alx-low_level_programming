#include "lists.h"
#include <stdio.h>

/**
 * print_listint - Prints all elements of a list
 * @h: linked list to print
 *
 * Return: number of nodes in list
 */

size_t print_listint(const listint_t *h)
{
	unsigned int i = 0;
	const listint_t *tmp = h;

	while (tmp)
	{
		printf("%d\n", tmp->n);
		i++;
		tmp = tmp->next;
	}

	return (i);
}
