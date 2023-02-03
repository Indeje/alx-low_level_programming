#include "lists.h"

/**
 * listint_len - Find number of elements in list
 * @h: linked list
 *
 * Return: number of elemets in list
 */

size_t listint_len(const listint_t *h)
{
	unsigned int i = 0;
	const listint_t *tmp = h;

	for (; tmp; i++)
		tmp = tmp->next;

	return (i);

}
