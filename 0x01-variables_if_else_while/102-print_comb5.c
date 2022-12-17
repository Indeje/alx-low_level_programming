#include <stdio.h>

/**
 * main -> prints all possible combinations of two two-digit numbers
 *
 * Return: 0 -> success
 */

int main(void)
{
	int i = '0', j = '0', k = '0', l = '1';

	for (; i <= '9'; i++)
	{
		for (j = 0; j <= '8'; j++)
		{
			for (k = i; k <= '9' ; k++)
			{
				for (l = j + 1; l <= '9'; l++)
				{
					putchar(i);
					putchar(j);
					putchar(' ');
					putchar(k);
					putchar(l);
					if (j < '8')
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
