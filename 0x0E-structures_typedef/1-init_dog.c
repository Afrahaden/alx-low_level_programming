#include "dog.h"

/**
 * init_dog - initializes a variable of type struct dog
 * @d: pointer to variable of type struct dog
 * @name: pointer to member of struct
 * @age: age of dog - member of struct
 * @owner: pointer to owner - member of struct
 *
 * Return: nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
