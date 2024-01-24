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

	if ((name == NULL) || (owner == NULL))
	{
		return (NULL);
	}
	else
	{
		dog = malloc(sizeof(dog_t));
		if (dog == NULL)
		{
			return (NULL);
		}
		else
		{
			dog->name = name;
			dog->age = age;
			dog->owner = owner;
			return (dog);
		}
	}
}
