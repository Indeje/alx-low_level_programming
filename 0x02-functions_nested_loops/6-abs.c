#include "main.h"

/**
 * _abs - compute absolute value of integer
 * @n: integer used
 *
 * Return: absolute value of int n if successful, -1 if failure
 */

int _abs(int n)
{
	int abs_val = -1;

	if (n >= 0)
		abs_val = n;
	else
		abs_val *= n;

	return (abs_val);
}
