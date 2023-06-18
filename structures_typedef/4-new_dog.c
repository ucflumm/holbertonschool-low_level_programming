#include <stdlib.h>
#include <stdio.h>
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
	doge->name = name;
	doge->age = age;
	doge->owner = owner;
	return (doge);
}
