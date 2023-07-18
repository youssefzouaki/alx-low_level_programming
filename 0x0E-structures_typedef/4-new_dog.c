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
	int len1 = 0, len2 = 0;

	while (name[len1])
	len1++;
	while (owner[len2])
	len2++;
	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);
	d->name = malloc(sizeof(char) * (len1 + 1));
	if (d->name == NULL)
	{
		free(d);
		return (NULL);
	}
	d->owner = malloc(sizeof(char) * (len2 + 1));
	if (d->owner == NULL)
	{
		free(d);
		free(d->name);
		return (NULL);
	}
	d->name = name;
	d->age = age;
	d->owner = owner;
	return (d);
}
