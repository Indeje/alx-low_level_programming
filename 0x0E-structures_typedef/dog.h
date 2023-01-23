#ifndef DOG_H
#define DOG_H

#include <stdio.h>
#include <stdlib.h>

/**
 * struct dog - define a new struct to store data about a dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 *
 */
struct dog
{
	char *name;
	char *age;
	char *owner;
};



/**
 * dog_t - typedef for struct dog
 */
typedef struct dog dog_t;


void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);


#endif
