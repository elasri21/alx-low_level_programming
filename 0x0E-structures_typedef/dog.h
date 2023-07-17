#ifndef MYHEADER_H
#define MYHEADER_H
/**
 * struct dog - data type
 * @name: the name
 * @age: the age
 * @owner: the owner
 */
struct dog
{
char *name;
float age;
char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
