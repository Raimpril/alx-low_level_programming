#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - Initializing struct
 * @d: d for dog to be initialized
 * @name: Name of dog
 * @age: Age of dog
 * @owner: Dog owner
 */

/*struct dog*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
/*struct dog a; struct dog *d = &a;*/

if (d != NULL)
{
d->name = name;
d->age = age;
d->owner = owner;
}
}
