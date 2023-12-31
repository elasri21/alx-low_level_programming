#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - creates new dog
 * @name: dog name
 * @age: doge age
 * @owner: dog owner
 * Return: dog_t on success. NULL otherwise
 *
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *new_dog;
char *name_c;
char *owner_c;
new_dog = malloc(sizeof(dog_t));
if (new_dog == NULL)
return (NULL);
name_c = malloc(strlen(name));
if (name_c == NULL)
{
free(new_dog);
return (NULL);
}
name_c = strdup(name);
owner_c = malloc(strlen(owner));
if (owner_c == NULL)
{
free(name_c);
free(new_dog);
return (NULL);
}
owner_c = strdup(owner);
new_dog->name = name_c;
new_dog->age = age;
new_dog->owner = owner_c;
return (new_dog);
}
