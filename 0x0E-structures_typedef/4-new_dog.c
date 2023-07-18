#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * new_dog -  initialize a variable of type struct dog
 * @name: First member
 * @age: Second member
 * @owner: Third member
 *
 * Return: nothing.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;
	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);
	d->name = name;
	d->age = age;
	d->owner = owner;
	return (d);
}
