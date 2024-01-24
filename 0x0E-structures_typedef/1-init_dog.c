#include "dog.h"

/**
* init_dog - initializes the dog structure
* @d: the pointer to the dog struct;
* @name: name of the dog;
* @age: age of the dog;
* @owner:  the dog owner;
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
}
