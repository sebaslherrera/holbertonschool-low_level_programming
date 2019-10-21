#ifndef DOG_H
#define DOG_H
#include <stdlib.h>

/**
 * struct dog - Describe a dog and some additional data
 * @name: String name of the dog
 * @age: float age of the dog
 * @owner: String name of the owner of the dog
 *
 * Description: Dog and owner data
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
