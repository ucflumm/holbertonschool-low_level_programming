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
	
	if (NULL == (doge = malloc(sizeof(struct dog))))
	{
		perror("No memory");
		freestruct(doge);
		return (NULL);
	}
	if (NULL == (doge->name = malloc(strlen(name) + 1)))
	{
		perror("No memory");
		freestruct(doge);
		return (NULL);
	}

	memcpy(doge->name, name, strlen(name) + 1);
	if (NULL == (doge->owner = malloc(strlen(owner) + 1)))
	{
		perror("No memory");
		freestruct(doge);
		return (NULL);
	}
	memcpy(doge->owner, owner, strlen(owner) + 1);
	doge->age = age;

	return (doge);
	
}

void freestruct(dog_t *doge, int c)
{
	free(doge->owner);
	free(doge->name);
	free(doge);
}