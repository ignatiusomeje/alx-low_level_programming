#include "dog.h"

/**
* free_dog - free the malloc space for a dog;
* @d: the pointer to the dog's details;
* Return: void;
*/

void free_dog(dog_t *d)
{
	if (d && d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
