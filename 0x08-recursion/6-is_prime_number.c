#include "main.h"

/**
 * is_prime_number - check if number is prime
 * @n: number to check
 *
 * Return: 1 if prime, else 0
 */

int is_prime_number(int n)
{
	return (check_prime(n, 2));
}


/**
 * check_prime - test if any integer is divisible by n from 2 upto 1/2n
 * @n: number to check if prime
 * @a: divisor
 *
 * Return: 0 if divisible, else 1
 */

int check_prime(int n, int a)
{
	if (n <= 1)
		return (0);

	if ((n % a) == 0)
		return (0);

	if (a > (n / 2))
		return (1);

	return (check_prime(n, a + 1));
}
