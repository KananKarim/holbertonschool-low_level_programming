#include "dog.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * new_dog - Creates a new dog
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 *
 * Return: Pointer to the new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newDog;
	char *newName, *newOwner;

	newDog = malloc(sizeof(dog_t));
	if (newDog == NULL)
	{
		return (NULL);
	}

	newName = malloc(sizeof(char) * (strlen(name) + 1));
	if (newName == NULL)
	{
		free(newDog);
		return (NULL);
	}

	newOwner = malloc(sizeof(char) * (strlen(owner) + 1));

	if (newOwner == NULL)
	{
		free(newName);
		free(newDog);
		return (NULL);
	}

	strcpy(newName, name);
	strcpy(newOwner, owner);
	newDog->name = newName;
	newDog->age = age;
	newDog->owner = newOwner;
	return (newDog);
}
