#include "main.h"

/**
 * _sqrt_recursion - find natural square root of a number
 * @n: number to find square root of
 *
 * Return: square root of n, -1 if n is negative/ has no natural square root
 */

int _sqrt_recursion(int n)
{
	if (n == 0 || n == 1)
		return (n);

	return (natural_root(n, 1));

}


/**
 * natural_root - tests every integer starting from 1 to find square root of n
 * @n: square number
 * @a: test number
 *
 * Return: square root of n
 */

int natural_root(int n, int a)
{
	if ((a * a) == n)
		return (a);

	if ((a * a) > n)
		return (-1);

	return (natural_root(n, a + 1));
}
