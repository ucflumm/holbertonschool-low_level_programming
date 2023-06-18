#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * main - does something?
 * Return: 0 if successful, 1 for error
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		printf("Ok");
		exit;
	}
	d->name = name;
	d->age = age;
	d->owner = owner;

}