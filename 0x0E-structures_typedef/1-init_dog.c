#include <stdio.h>
#include "dog.h"
/**
 * init_dog - initialize a variable of type struct dog
 * @d: structure
 * @name: the name
 * @age: the age
 * @owner: the owner
 * Return: Nothing
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d != NULL || name != NULL || !age || !owner)
{
d->name = name;
d->age = age;
d->owner = owner;
}
}
