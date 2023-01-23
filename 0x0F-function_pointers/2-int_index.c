/**
 * int_index - search for integer in array
 * @array: pointer to integer array
 * @size: array size
 * @cmp: pointer to function used for comparison
 *
 * Return: index of first element to match search criteria,
 * -1 if no matches or size <= 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array && size && cmp)
	{
		for (; i < size; i++)
		{
			if (cmp(array[i]))
				return i;
		}
	}

	return (-1);
}
