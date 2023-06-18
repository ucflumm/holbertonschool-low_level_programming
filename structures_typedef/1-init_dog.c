#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * init_dog - does something?
 * @d: pointer to struct
 * @name: pointer to name
 * @age: age
 * @owner: pointer to owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		printf("Ok\n");
		exit(1);
	}
	d->name = name;
	d->age = age;
	d->owner = owner;

}