#include "dog.h"

/**
 *print_dog - function that prints the struct dog
 *@d: pointer to the variable od struct
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}
	printf("name: %s\n", (d->name != NULL) ? d->name : "(nil)");
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", (d->owner != NULL) ? d->owner : "(nil)");
}
