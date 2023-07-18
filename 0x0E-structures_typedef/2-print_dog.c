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
	if (d->name == NULL)
		d->name = "(nil)";
	if (d->age == NULL)
		d->age = "(nil)";
	printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner);
}
