#include <stdio.h>

/**
 * main -> prints all possible combinations of 3-digit numbers
 *
 * Return: 0 -> success
 */

int main(void)
{
	int i = '0', j = '1', k = '2';

	for (; i <= '7'; i++)
	{
		for (j = i + 1; j <= '8'; j++)
		{
			for (k = j + 1; k <= '9'; k++)
			{
				putchar(i);
				putchar(j);
				putchar(k);
				if (i < '7')
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
