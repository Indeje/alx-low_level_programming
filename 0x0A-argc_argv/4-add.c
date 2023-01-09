#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies numbers as arguments
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 if successful, 1 if error
 */

int main(int argc, char **argv)
{
	int i = 1, j = 0, sum = 0;

	for (; i < argc; i++)
	{
		for (j = 0; argv[i][j]; j++)
		{
			if (argv[i][j] < 48 || argv[i][j] > 57)
			{
				printf("Error\n");
				return (1);
			}
		}

		sum += atoi(argv[i]);
	}

	printf("%d\n", sum);

	return (0);
}
