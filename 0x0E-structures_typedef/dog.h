#ifndef DOG_H
#define DOG_H
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


void init_dog(struct dog *d, char *name, float age, char *owner);

void print_dog(struct dog *d);

#endif
