#include "dog.h"

/**
 * init_dog - initializes a variable of type struct dog
 * @d: pointer to the struct dog variable to initialize
 * @name: name to initialize the dog with
 * @age: age to initialize the dog with
 * @owner: owner to initialize the dog with
 *
 * Description: initializes a struct dog variable with the given values
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
