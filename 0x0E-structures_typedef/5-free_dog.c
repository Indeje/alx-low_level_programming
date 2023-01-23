#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees dog variable
 * @d: pointer to struct dog
 *
 * Return: no return value
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->owner);
		free(d->name);
		free(d);
	}
}
