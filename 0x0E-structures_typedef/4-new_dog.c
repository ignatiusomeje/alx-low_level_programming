#include "dog.h"

/**
 * *new_dog - A funtion that creates a new dog
 * @name: the name of the dog;
 * @age: the age of the dog;
 * @owner: the owner of the dog
 * Return: dog_t;
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	char *internalname;
	char *internalowner;

	internalname = malloc(sizeof(*name) + 1);
	internalowner = malloc(sizeof(*owner) + 1);

	if ((internalname == NULL) || (internalowner == NULL))
	{
		free(internalname);
		free(internalowner);
		return (NULL);
	}
	else
	{
		internalname = name;
		internalowner = owner;
		dog = malloc(sizeof(dog_t));
		if (dog == NULL)
		{
			free(dog);
			return (NULL);
		}
		else
		{
			dog->name = internalname;
			dog->age = age;
			dog->owner = internalowner;
			return (dog);
		}
	}
}
