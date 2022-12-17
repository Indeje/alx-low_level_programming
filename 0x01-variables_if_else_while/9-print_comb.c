#include <stdio.h>

/**
 * main -> prints single-digit numbers
 *
 * Return: 0 -> success
 */

int main(void)
{
	int i = '0';

	for (; i <= '9'; i++)
	{
		putchar(i);
		if (i < '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
}
