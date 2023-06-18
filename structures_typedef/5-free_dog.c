#include <stdlib.h>
#include <stdio.h>
#include "dog.h"
/**
 * new_dog - does something?
 * Return: malloc error
 */
void free_dog(dog_t *d)
{
	if(d != NULL)
	{
		free(d->owner);
		free(d->name);
		free(d);
	}
}
