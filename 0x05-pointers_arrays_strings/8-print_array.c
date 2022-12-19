#include <stdio.h>
#include "main.h"

/**
 * print_array - Print n element of array a
 * @a: array of integers
 * @n: number of elements to print
 *
 * Return: none
 */

void print_array(int *a, int n)
{
	int i = 0;

	for (; i < n; i++)
	{
		printf("%d", *(a + i));
		if (i < (n - 1))
			printf(", ");
	}
	printf("\n");
}
