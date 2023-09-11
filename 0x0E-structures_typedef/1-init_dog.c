#include <stdio.h>
#include "dog.h"

/**
 *init_dog - initializes a variaable of type struct dog
 *@d: pointer to the variable to be initialized
 *@name: pointer to dogs name
 *@age: age of the dog
 *@owner: pointer to owner of dog
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
