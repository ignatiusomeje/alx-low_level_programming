#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdio.h>

/**
* struct dog - a dog structure
* @name: the name of the dog;
* @age:  the age of the dog;
* @owner: the name of the owner;
*/
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
