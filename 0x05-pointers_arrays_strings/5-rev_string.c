#include <stdio.h>
#include "main.h"

/**
 * rev_string - reverse string
 * @s: pointer to string to reverse
 *
 * Return: none
 */

void rev_string(char *s)
{
	char tmp = *s;
	int len = 0, front = 0, rear;

	while (tmp != '\0')
	{
		len++;
		tmp = *(s + len);
	}
	rear = len - 1;
	for (tmp = *s; front <= rear; front++, rear--, tmp = *(s + front))
	{
		*(s + front) = *(s + rear);
		*(s + rear) = tmp;
	}
}
