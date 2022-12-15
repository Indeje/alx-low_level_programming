#include "main.h"

/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
	int largest;

	if (a > b)
	{
		if (b > c || a > c)
			largest = a;
	}
	if (b > c)
	{
		if (c > a || b > a)
			largest = b;
	}
	if (c > a)
	{
		if (a > b || c > b)
			largest = c;
	}

	return (largest);
}
