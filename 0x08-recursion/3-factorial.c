#include "main.h"

/**
 * factorial - calculate factorial of an integer
 * @n: integer to find factorial of
 *
 * Return: factorial of integer n
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);

	if (n == 0)
		return (1);

	return (n * factorial(n - 1));
}
