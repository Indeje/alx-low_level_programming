/**
 * print_name - prints a name
 * @name: pointer to name
 * @f: pointer to function
 *
 * Return: no return value
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
