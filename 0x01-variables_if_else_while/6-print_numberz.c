#include <stdio.h>

/**
 * main - entry point
 *
 * Return: always 0 -> success
 */

int main(void)
{
	int i = 0;

	for (; i < 10; i++)
		putchar(i);
	putchar('\n');

	return (0);
}
