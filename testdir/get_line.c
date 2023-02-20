#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}



/**
 * main - main function
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0
 */

int main(int argc, char **argv)
{
	char *lineptr = NULL, ch;
	int i = 0, count = 0;

	_putchar('$');
	_putchar(' ');

	lineptr = (char *)malloc(1000 * sizeof(char));

	do
	{
		ch = getchar();
		lineptr[i] = ch;
		i++;
	}while (ch != '\n');

	i--;
	lineptr[i] = '\0';


	while (lineptr[count])
	{
		_putchar(lineptr[count]);
		count++;
	}

	free(lineptr);

	return (count);
}
