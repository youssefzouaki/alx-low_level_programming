#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog -  initialize a variable of type struct dog
 * @d: pointer to struct dog to initialize
 *
 * Return: nothing.
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	printf("name: %s\n", d->name);
	printf("age: %f\n", d->age);
	printf("owner: %s\n", d->owner);
}
