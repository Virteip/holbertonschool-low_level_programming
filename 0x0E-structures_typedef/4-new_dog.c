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
	dog_t *new_dog;

	new_dog = malloc(sizeof(struct dog));

	if (new_dog == NULL)
		return (NULL);

	new_dog->name = name;
	new_dog->age = age;
	new_dog->owner = owner;

	return (new_dog);
}
