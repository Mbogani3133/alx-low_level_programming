#include "dog.h"

/**
 * init_dog - initialize dog struct
 *
 * @d: input pointer to struct dog
 * @name: input for dog's name
 * @age: input for dog's age
 * @owner: input for the owner 0f the dog.
 *
 * Return: zero (0)
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
	  (*d).name = name;
	        d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
