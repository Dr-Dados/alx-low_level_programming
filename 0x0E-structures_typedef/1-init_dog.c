#include <stdlib.h>
#include "dog.h"

/**
 *init_dog - initialize variables of struct dog
 *@dog: pointer to struct dog to initialize
 *@name: name to initialize
 *@age: age to initialize
 *@owner: owner to initialize
 */

void init_dog(struct dog *dog, char *name, float age, char *owner)
{
if(dog == NULL)
d = malloc(sizeof(struct dog));
d->name = name;
d->age = age;
d->owner = owner;
}
