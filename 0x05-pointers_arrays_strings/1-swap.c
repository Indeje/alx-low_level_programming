#include "main.h"

/**
 * swap_int - swap two integers
 * @a: first int pointer
 * @b: second int pointer
 *
 * Return: none
 */

void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
