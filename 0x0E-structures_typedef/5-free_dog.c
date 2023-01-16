#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - frees a dog
 * @d: dog to be freed
 */

void free_dog(dog_t *d)
{
	if ( == NULL)
		return;

	free((*d).name);
	free((*d).owner);
	free(d);
}
