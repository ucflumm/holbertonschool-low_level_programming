#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "dog.h"
/**
 * new_dog - does something?
 * @name: name of doge
 * @age: age of doge
 * @owner: owner of doge
 * Return: malloc error or pointer to doge
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *doge;

	doge = malloc(sizeof(struct dog));
	if (doge == NULL)
		return (NULL);

	doge->name = malloc(sizeof(name));

	doge->owner = malloc(sizeof(owner));
	strcpy(doge->name, name);
	strcpy(doge->owner, owner);
	doge->age = age;
	return (doge);
}
