#ifndef DOG_H
#define DOG_H

int _putchar(char c);

void init_dog(struct dog *d, char *name, float age, char *owner);


/**
 * struct dog - dog object
 * @name: name
 * @age: age
 * @owner: owner
 * Description: characteristics for dog
 **/
struct dog
{
	char *name;
	float age;
	char *owner;
};

#endif
