#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_dog -> function that frees dogs
 * @d: pointer dog memory address
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
	{
		return;
	}

	free(d->owner);
	free(d->name);
	free(d);
}
