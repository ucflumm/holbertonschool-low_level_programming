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
	dog_t *doge = malloc(sizeof(struct dog));

	if (doge == NULL)
	{
		free(doge);
		exit(1);
		return (NULL);
	}
	doge->name = malloc(strlen(name) + 1);
	if (doge->name == NULL)
	{
		free(doge->name);
		free(doge);
		exit(1);
		return (NULL);
	}

	memcpy(doge->name, name, strlen(name) + 1);
	doge->owner = malloc(strlen(owner) + 1);
	if (doge->owner == NULL)
	{
		free(doge->owner);
		free(doge->name);
		free(doge);
		exit(1);
		return (NULL);
	}
	memcpy(doge->owner, owner, strlen(owner) + 1);
	doge->age = age;

	return (doge);
}

