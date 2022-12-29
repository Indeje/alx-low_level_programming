#include "main.h"

/**
 * reverse_array - Reverse contents of array of integers
 * @a: pointer to array of integers
 * @n: size of array
 *
 * Return: no return value
 */

void reverse_array(int *a, int n)
{
	int i = 0, tmp;

	for (; i < (n / 2); i++)
	{
		tmp = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = tmp;
	}
}
