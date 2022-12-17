#include <stdio.h>

/**
 * main -> prints single-digit numbers
 *
 * Return: 0 -> success
 */

int main(void)
{
	int i = '0', j = '1';

	for (; i <= '8'; i++)
	{
		for (j = i + 1; j <= '9'; j++)
		{
			if ((i != j) && (i < j))
			{
				putchar(i);
				putchar(j);
				if (i < '8')
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
