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
	{
		freestruct(doge);
		return (NULL);
	}
	doge->name = malloc(strlen(name));
	if (doge->name == NULL)
	{
		freestruct(doge);
		return (NULL);
	}
	doge->owner = malloc(strlen(owner));
	if (doge->owner == NULL)
	{
		freestruct(doge);
		return (NULL);
	}
	strcpy(doge->name, name);
	strcpy(doge->owner, owner);
	doge->age = age;

	return (doge);
	
}

void freestruct(dog_t *doge)
{
	free(doge->owner);
	free(doge->name);
	free(doge);
}