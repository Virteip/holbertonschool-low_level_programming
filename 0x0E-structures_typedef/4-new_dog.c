#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * new_dog - check the code for Holberton School students.
 *
 *@name: name
 *@age: age
 *@owner: owner
 *
 * Return: Always 0.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;

	d = malloc(sizeof(struct dog));

	if (d == NULL)
		return (NULL);

	d->name = name;
	d->age = age;
	d->owner = owner;

	if (

	return (d);
}
