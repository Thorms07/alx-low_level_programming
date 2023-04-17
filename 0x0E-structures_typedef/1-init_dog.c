#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - initializes a dog struct
 * @d: pointer to the dog struct to initialize
 * @name: name of the dog
 * @age: age of the dog
 * @owner: name of the dog's owner
 *
 * Description: initializes the members of a dog struct
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	/* Check if pointer is NULL */
	if (d == NULL)
		return;

	/* Set the values of the dog struct members */
	d->name = name;
	d->age = age;
	d->owner = owner;
}
