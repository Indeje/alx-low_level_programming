#include <stddef.h>

/**
 * array_iterator - executes given function on each array element
 * @array: array
 * @size: array size
 * @action: pointer to function to be executed
 *
 * Return: no return value
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (array && action && size)
	{
		for (; i < size; i++)
			action(array[i]);
	}
}
