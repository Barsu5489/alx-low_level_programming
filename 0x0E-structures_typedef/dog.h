#ifndef MY_HEADER_H
#define MY_HEADER_H

#include <stdio.h>
#include <stdlib.h>
/**
 *struct dog - define dog struct
 * @name: dog name
 * @age: dog age
 * @owner: owners name
 */

struct dog
{
	char *name;
	float age;
	char *owner;
}
dog;

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif